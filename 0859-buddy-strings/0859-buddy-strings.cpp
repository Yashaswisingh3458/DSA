class Solution {
public:
    bool buddyStrings(string s, string goal) {

        if(s == goal){
            vector<int> freq(26, 0);
            for(char ch : s){
                freq[ch - 'a']++;
                if(freq[ch - 'a'] > 1){
                    return true;
                }
            }
            return false;
        }

        int temp = -1;
        int c = 0;
        int temp2 = -1;

        for(int i = 0; i < s.size(); i++){
            if(s[i] != goal[i] && c == 0){
                temp = i;
                c++;
            }
            else if(s[i] != goal[i]){
                temp2 = i;
                c++;
            }
            if(c > 2){
                return false;
            }
        }

        if(temp >= 0 && temp2 >= 0){
            swap(s[temp], s[temp2]);
            if(s == goal){
                return true;
            }
        }
        return false;
    }
};