class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector<int>ys(n);
        ys[n-1] = nums[n-1];
        for(int i = n-2;i>=0;i--){
            ys[i] = min(nums[i],ys[i+1]);
        }
        int s = nums[0];
        for(int i =0;i<n-1;i++){
            s=max(s,nums[i]);
            if(s<=ys[i+1]){
                return i+1;
            }
        }
        return n;
    }
};