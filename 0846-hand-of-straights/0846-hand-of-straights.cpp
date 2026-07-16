class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0){
            return false;
        }
        unordered_map<int,int>s;
        sort(hand.begin(),hand.end());
        for(int i =0;i<hand.size();i++){
            s[hand[i]]+=1;
        }
        for(int i=0;i<hand.size();i++){
            int y = groupSize;
            if(s[hand[i]]<=0){
                continue;
            }
            int q=0;
            while(y>0){
                if(s[hand[i]+q]>0){
                    s[hand[i]+q]-=1;
                    q+=1;
                    y-=1;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};