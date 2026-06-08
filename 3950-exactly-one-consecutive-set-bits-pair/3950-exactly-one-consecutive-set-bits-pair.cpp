class Solution {
public:
    bool consecutiveSetBits(int n) {
        int c=0;
        int y =0;
        while(n!=0){
            int c=0;
            while(n>0 && n%2==1){
                c+=1;
                n=n/2;
            }
            if(c >= 2){
                y += c - 1;
            }
            if(n!=0){
                n=n/2;
            }
        }
        if(y==1){
            return true;
        }
        return false;
    }
};