class Solution {
public:
    int hammingWeight(int n) {
        int ys =0;
        while(n!=0){
            if(n%2==1){
                ys+=1;
            }
            n=n/2;
        }
        return ys;
    }
};