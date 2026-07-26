class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            int m = nums[0];
            int n = nums[1];
            int s = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
            return max(m*n*nums[nums.size()-1],s);
    }
};