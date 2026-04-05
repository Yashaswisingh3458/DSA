class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0;
        int d=0;
        int r=0;
        int l=0;
        for(int i =0;i<moves.size();i++){
            if(moves[i]=='U'){
                u+=1;
            }
            else if(moves[i]=='D'){
                d+=1;
            }
            else if(moves[i]=='R'){
                r+=1;
            }
            else{
                l+=1;
            }
        }
        if(u==d && r==l){
            return true;
        }
        else{
            return false;
        }
    }
};