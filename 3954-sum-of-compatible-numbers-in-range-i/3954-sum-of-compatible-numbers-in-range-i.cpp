class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int q = max(n-k,0);
        int y = n+k;
        int sum =0;
        for(int s=q;s<=y;s++){
            if(abs(n-s)<=k && ((n&s)==0)){
                sum += s;
            }
        }
        return sum;

    }
};