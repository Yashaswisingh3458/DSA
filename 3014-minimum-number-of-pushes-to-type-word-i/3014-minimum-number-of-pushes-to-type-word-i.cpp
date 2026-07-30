class Solution {
public:
    int minimumPushes(string word) {
        int y = word.size();
        if(y<=8){
            return y;
        }
        else if(y>8 && y<=16){
            return (y-8)*2 + 8;
        }
        else if(y>16 && y<25){
            return (y-16)*3 + 24;
        }
        else{
            return (y-24)*4+(y-16-(y-24))*3 +24;
        }
    }
};