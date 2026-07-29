class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>>y;
        unordered_map<char,int>ys;
        for(int i =0;i<s.size();i++){
            ys[s[i]]+=1;
        }
        for(int i =0;i<s.size();i++){
            if(ys[s[i]]!=-1){
                y.push_back({s[i],ys[s[i]]});
                ys[s[i]]=-1;
            }
        }
        sort(y.begin(), y.end(), [](const pair<char, int> &a, const pair<char, int> &b) {
            return a.second > b.second;
        });
        string ans = "";
        for(int i =0;i<y.size();i++){
            while(y[i].second!=0){
                ans += y[i].first;
                y[i].second-=1;
            }
        }
        return ans;
    }
};