class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans = 0;
        long long MOD = 1e9 + 7;

        for(int i = 1; i <= n; i++){
            int temp = i;
            int bits = 0;
            while(temp != 0){
                bits++;
                temp /= 2;
            }
            ans = (ans << bits) % MOD;
            ans = (ans + i) % MOD;
        }

        return ans;
    }
};