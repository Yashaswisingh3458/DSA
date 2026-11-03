class Solution {
public:
    int minMoves(vector<int>& nums) {
        int s = *max_element(nums.begin(),nums.end());
        int y=0;
        for(int i =0;i<nums.size();i++){
            y+=(s-nums[i]);
        }
        return y;
    }
};