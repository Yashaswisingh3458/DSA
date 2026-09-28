class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int c=0;
        for(int i =0;i<s.size();i++){
            if(s[i] == '('){
                c += 1;
            }
            else if(s[i]== ')'){
                ans = max(ans,c);
                c=c-1;
            }
        }
        return ans;
    }
};