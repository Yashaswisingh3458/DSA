class Solution {
public:
    int minInsertions(string s) {
        int y = 0;
        int need = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                need += 2;
                if(need % 2 == 1) {
                    y++;
                    need--;
                }
            }
            else {
                need--;

                if(need < 0) {
                    y++;
                    need = 1;
                }
            }
        }

        return y + need;
    }
};