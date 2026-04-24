class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l =0;
        int g = 0;
        int u =0;
        int n = moves.size();
        for(int i =0;i<n;i++){
            if(moves[i]=='R'){
                g+=1;
            }
            else if(moves[i]=='L'){
                l+=1;
            }
            else{
                u+=1;
            }
        }
        int t1=max(l,g);
        int t2=min(l,g);
        return (t1 + u - t2);
    }
};