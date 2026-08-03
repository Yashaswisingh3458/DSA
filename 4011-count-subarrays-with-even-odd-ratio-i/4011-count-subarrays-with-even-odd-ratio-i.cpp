class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int ans =0;
        for(int i =0;i<nums.size();i++){
            int y = 0;
            int s = 0;
            for(int q = i;q<nums.size();q++){
                if(nums[q]%2==0){
                    s+=1;
                }
                else{
                    y+=1;
                }
                    if(y>0 && 1LL*s*b <= 1LL*y*a){
                    ans +=1;
                }
            }
        }
        return ans;
    }
};