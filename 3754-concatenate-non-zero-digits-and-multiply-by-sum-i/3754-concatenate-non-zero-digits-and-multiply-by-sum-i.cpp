class Solution {
public:
    long long sumAndMultiply(int n) {
        long long s=0;
        int y = 0;
        int i =0;
        while(n!=0){
            int q=n%10;
            if(q!=0){
                s=s+(q*pow(10,i));
                i+=1;
                y+=q;
            }
            n=n/10;
        }
        return s*y;
    }
};