class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ys = 0;
        for(int i =0;i<nums.size();i++){
            int y=1;
            while(i<nums.size()-1 && nums[i]<nums[i+1]){
                i+=1;
                y+=1;
            }
            ys = max(ys,y);
        }
        for(int i =0;i<nums.size();i++){
            int s=1;
            while(i<nums.size()-1 && nums[i]>nums[i+1]){
                i+=1;
                s+=1;
            }
            ys=max(ys,s);
        }
        return ys;
    }
};