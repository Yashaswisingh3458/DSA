class Solution {
public:
    int hammingDistance(int x, int y) {
        int s = 0;
        while(max(x,y)!=0){
            if(x%2 != y%2){
                s+=1;
            }
            x=x/2;
            y=y/2;
        }
        return s;
    }
};