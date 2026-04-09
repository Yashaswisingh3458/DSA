class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char,int> y;

        for(int i = 0; i < s.size(); i++){
            y[s[i]]++;
        }

        int ans = 0;

        for(int i = 0; i < s.size(); i++){
            if(y[s[i]] == 0) continue; // avoid double counting

            if(s[i] >= 'a' && s[i] <= 'z'){
                char temp = 'a' + ('z' - s[i]);
                char temp2 = s[i];

                ans += abs(y[temp] - y[temp2]);

                y[temp] = 0;
                y[temp2] = 0;
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                char temp = '0' + ('9' - s[i]);
                char temp2 = s[i];

                ans += abs(y[temp] - y[temp2]);

                y[temp] = 0;
                y[temp2] = 0;
            }
        }

        return ans;
    }
};