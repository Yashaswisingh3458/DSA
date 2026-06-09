class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long y = *max_element(nums.begin(),nums.end());
        long long s = *min_element(nums.begin(),nums.end());
        return (y-s)*k;
    }
};