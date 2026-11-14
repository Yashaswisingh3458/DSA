class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ys = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            for(int q=i; q<nums.size(); q++){
                int s = 0;
                for(int y=i; y<=q; y++){
                    s = s + nums[y];
                }
                if(s > 0 && q-i+1 >= l && q-i+1 <= r && s < ys){
                    ys = s;
                }
            }
        }
        if(ys == INT_MAX){
            ys = -1;
        }
        return ys;
    }
};