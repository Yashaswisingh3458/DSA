class Solution {
public:
    int bitwiseComplement(int n) {
       int a = 0;
       int temp = n;
       if (n==0){
        return 1;
       }
       while(temp!=0){
        a = a<<1;
        a = a|1;
        temp = temp >> 1;
       }
       int ans = a & (~n);
       return ans;
    }
};