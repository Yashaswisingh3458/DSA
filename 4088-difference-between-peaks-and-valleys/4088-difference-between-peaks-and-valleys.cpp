class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int y=0;
        int s =0;
        for(int i =0;i<nums.size();i++){
            if(i>0 && i<nums.size()-1){
                if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){
                    y+=nums[i];
                }
                else if(nums[i]<nums[i+1] && nums[i]<nums[i-1]){
                    s+=nums[i];
                }
            }
        }
        return y-s;
    }
};