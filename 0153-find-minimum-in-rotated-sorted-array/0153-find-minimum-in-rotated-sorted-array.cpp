class Solution {
public:
    int findMin(vector<int>& nums) {
        int temp = nums[0];
        for(int i =0;i<nums.size();i++){
            if(nums[i]<temp){
                temp = nums[i];
            }
        }
        return temp;
    }
};