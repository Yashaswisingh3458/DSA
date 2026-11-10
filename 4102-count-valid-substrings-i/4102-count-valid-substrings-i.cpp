
class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans = 0;
        int lastBad = -1;

        for (int i = 0; i < s.size(); i++) {
            if (i >= 2 && s.substr(i - 2, 3) == "abc") {
                lastBad = i - 2;
            }

            ans += i - lastBad;
        }

        return ans;
    }
};
