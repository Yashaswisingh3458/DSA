class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>y;
        int n = s.size();
        for(int i =0;i<n;i++){
            y[s[i]]+=1;
        }
        int ys = 0;
        for(int i =0;i<n;i++){
            ys += y[s[i]]-(y[s[i]]%2);
            y[s[i]]=0;
        }
        ys = min(n,ys+1);
        return ys;
    }
};