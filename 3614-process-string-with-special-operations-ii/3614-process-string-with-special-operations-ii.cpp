class Solution {
public:
    char processStr(string s, long long k) {

        int n = s.size();
        const long long LIM = 1e15;

        vector<long long> len(n + 1, 0);

        for (int i = 0; i < n; i++) {

            len[i + 1] = len[i];

            if (s[i] == '*') {

                if (len[i + 1] > 0)
                    len[i + 1]--;

            }
            else if (s[i] == '#') {

                len[i + 1] = min(LIM, len[i] * 2);

            }
            else if (s[i] == '%') {

                // length unchanged

            }
            else {

                len[i + 1] = min(LIM, len[i] + 1);

            }
        }

        if (k >= len[n])
            return '.';

        for (int i = n - 1; i >= 0; i--) {

            long long prev = len[i];
            long long curr = len[i + 1];

            if ('a' <= s[i] && s[i] <= 'z') {

                if (k == prev)
                    return s[i];

            }

            else if (s[i] == '*') {

                // index unchanged

            }

            else if (s[i] == '#') {

                k %= prev;

            }

            else if (s[i] == '%') {

                k = curr - 1 - k;

            }
        }

        return '.';
    }
};