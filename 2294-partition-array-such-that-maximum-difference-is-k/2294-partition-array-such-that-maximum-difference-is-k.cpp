class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int s=1;
        int temp = nums[0];
        for(int i =1;i<nums.size();i++){
            if(nums[i]-temp>k){
                s+=1;
                temp = nums[i];
            }
        }
        return s;
    }
};