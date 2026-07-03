class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            vector<int> freq(26,0);
            for(int y=i;y<s.size();y++){
                freq[s[y]-'a']++;
                int mn = INT_MAX;
                int mx = 0;
                for(int k=0;k<26;k++){
                    if(freq[k]){
                        mn = min(mn,freq[k]);
                        mx = max(mx,freq[k]);
                    }
                }
            ans += mx-mn;
            }
        }
        return ans;
    }
};