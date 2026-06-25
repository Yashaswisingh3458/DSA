class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans =0;
        for(int i =0;i<nums.size();i++){
            int c=0;
            for(int s=i;s<nums.size();s++){
                if(nums[s]==target){
                    c+=1;
                }
                int len = s - i + 1;
                if(c > len/2)
                    ans++;
            }
        }
        return ans;
    }
};