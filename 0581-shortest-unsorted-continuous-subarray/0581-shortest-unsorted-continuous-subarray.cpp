class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int s=0;
        int y=0;
        int c=0;
        vector<int>ys(nums.begin(),nums.end());
        sort(ys.begin(),ys.end());
        for(int i =0;i<nums.size();i++){
            if(ys[i]!=nums[i] && c==0){
                s=i;
                c=1;
            }
            else if(nums[i]!=ys[i]){
                y=i;
            }
        }
        if(c==0){
            return 0;
        }
        else{
            return y-s+1;
        }
    }
};