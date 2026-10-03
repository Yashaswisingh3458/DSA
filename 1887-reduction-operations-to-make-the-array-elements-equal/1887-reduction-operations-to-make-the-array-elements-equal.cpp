class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<pair<int,int>> y;
        for(int i = 0; i < n; i++) {
            int temp = i;
            while(temp + 1 < n && nums[temp] == nums[temp+1]) {
                temp++;
            }
            y.push_back({nums[temp], temp-i+1});
            i = temp;
        }
        int s = nums[0];
        int ys = 0;
        for(int i = y.size()-1; i > 0; i--) {
            ys += i * y[i].second;
        }
        return ys;
    }
};