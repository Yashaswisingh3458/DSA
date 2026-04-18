class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int>diff;
        for(int i =0;i<costs.size();i++){
            diff.push_back(abs(costs[i][0]-costs[i][1]));
        }
        vector<pair<int, vector<int>>> combined;
        for(int i=0;i<costs.size();i++){
            combined.push_back({diff[i],costs[i]});
        }
        sort(combined.begin(),combined.end());
        vector<vector<int>>s;
        for (auto &q : combined) {
            s.push_back(q.second);
        }
        int s1=0;
        int s2=0;
        int ans =0;
        for(int i = s.size()-1; i >= 0; i--){
            if((s[i][0] <= s[i][1] && s1 < costs.size()/2) || s2 == costs.size()/2){
            s1++;
            ans += s[i][0];
            } else {
                s2++;
                ans += s[i][1];
            }
        }
        return ans;
    }
};