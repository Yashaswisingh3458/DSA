class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans=0;
        for(int i =0;i<nums.size();i++){
            int c=1;
            for(int s=i;s<nums.size()-1;s++){
                if(nums[s]<nums[s+1]){
                    c+=1;
                }
                else{
                    break;
                }
            }
            ans=max(ans,c);
        }
        return ans;
    }
};