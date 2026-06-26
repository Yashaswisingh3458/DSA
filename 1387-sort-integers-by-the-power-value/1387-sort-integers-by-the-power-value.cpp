class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>s;
        for(int i =lo;i<=hi;i++){
            int c=0;
            int temp = i;
            while(temp!=1){
                if(temp%2==0){
                    temp=temp/2;
                }
                else{
                    temp=temp*3+1;
                }
                c+=1;
            }
            s.push_back({c,i});
        }
        sort(s.begin(),s.end());
        return s[k-1].second;
    }
};