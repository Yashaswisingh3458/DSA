class Solution {
public:
    int maxDistance(string moves) {
        int x = 0;
        int y = 0;
        int s = 0;
        for(int i =0;i<moves.size();i++){
            if(moves[i]=='R'){
                x+=1;
            }
            else if(moves[i]=='L'){
                x-=1;
            }
            else if(moves[i]=='U'){
                y+=1;
            }
            else if(moves[i]=='D'){
                y-=1;
            }
            else{
                s+=1;
            }
        }
        y=abs(y);
        x=abs(x);
        return abs(x) + abs(y) + s;
    }
};