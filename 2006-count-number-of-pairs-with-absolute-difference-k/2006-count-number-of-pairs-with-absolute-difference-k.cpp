class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int c=0;
        for(int i =0;i<nums.size();i++){
            for(int s=i+1;s<nums.size();s++){
                if(abs(nums[i]-nums[s])==k){
                    c+=1;
                }
            }
        }
        return c;
    }
};