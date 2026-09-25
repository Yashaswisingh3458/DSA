class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            sort(nums[i].begin(),nums[i].end());
        }
        int ys=0;
        int nn = nums[0].size();
        for(int i =0;i<nn;i++){
            int y =0;
            for(int s=0;s<n;s++){
                y = max(y,nums[s][i]);
            }
            ys += y;
        }
        return ys;
    }
};