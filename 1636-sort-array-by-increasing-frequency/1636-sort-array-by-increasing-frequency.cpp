class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int, int>>s;
        unordered_map<int,int>y;
        for(int i =0;i<nums.size();i++){
            y[nums[i]]+=1;
        }
        for(int i =0;i<nums.size();i++){
            if(y[nums[i]]!=0){
                s.push_back({nums[i],y[nums[i]]});       
                y[nums[i]]=0;
            }
        }
        stable_sort(s.begin(), s.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
            if (a.second != b.second)
                return a.second < b.second;
            return a.first > b.first;
        });
        vector<int>ys;
        for(int i =0;i<s.size();i++){
            for(int q=0;q<s[i].second;q++){
                ys.push_back(s[i].first);
            }
        }
        return ys;
    }
};