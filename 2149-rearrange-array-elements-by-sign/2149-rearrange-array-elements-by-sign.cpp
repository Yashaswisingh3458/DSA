class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>s(nums.size());
        int n=1;
        int q = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>=0){
                s[q] = nums[i];
                q+=2;
            }
            else{
                s[n]=nums[i];
                n+=2;
            }
        }
        return s;
    }
};