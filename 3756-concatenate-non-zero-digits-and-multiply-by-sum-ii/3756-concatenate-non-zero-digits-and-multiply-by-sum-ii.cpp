class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        const int MOD = 1000000007;

        int n = s.size();

        vector<int> prefCnt(n + 1, 0);

        vector<int> digits;
        vector<long long> prefSum(1, 0);
        vector<long long> prefVal(1, 0);

        for (int i = 0; i < n; i++) {
            prefCnt[i + 1] = prefCnt[i];

            if (s[i] != '0') {
                prefCnt[i + 1]++;

                int d = s[i] - '0';
                digits.push_back(d);

                prefSum.push_back(prefSum.back() + d);
                prefVal.push_back((prefVal.back() * 10 + d) % MOD);
            }
        }

        int m = digits.size();

        vector<long long> pw(m + 1, 1);
        for (int i = 1; i <= m; i++)
            pw[i] = (pw[i - 1] * 10) % MOD;

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];

            int L = prefCnt[l];
            int R = prefCnt[r + 1];

            if (L == R) {
                ans.push_back(0);
                continue;
            }

            int len = R - L;

            long long x =
                (prefVal[R] -
                 prefVal[L] * pw[len] % MOD +
                 MOD) % MOD;

            long long sum = prefSum[R] - prefSum[L];

            ans.push_back((x * sum) % MOD);
        }

        return ans;
    }
};