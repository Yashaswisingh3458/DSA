class Solution {
public:
    int maximumXorProduct(long long a, long long b, int n) {
        const long long MOD = 1000000007;
        long long A = (a >> n) << n;
        long long B = (b >> n) << n;
        long long x = 0;
        for (int i = n - 1; i >= 0; i--) {

            int abit = (a >> i) & 1;
            int bbit = (b >> i) & 1;
            if (abit == bbit) {
                if (abit == 0) {
                    x |= (1LL << i);
                }
                A |= (1LL << i);
                B |= (1LL << i);
            }
            else {
                if (A < B) {
                    A |= (1LL << i);
                    x |= (1LL << i);
                }
                else {
                    B |= (1LL << i);
                }
            }
        }
        long long ans = ((A % MOD) * (B % MOD)) % MOD;
        return ans;
    }
};