class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            int num = 0;
            while(nums[i]!=0){
                num += nums[i]%10;
                nums[i]=nums[i]/10;
            }
            nums[i]=num;
        }
        return *min_element(nums.begin(),nums.end());
    }
};