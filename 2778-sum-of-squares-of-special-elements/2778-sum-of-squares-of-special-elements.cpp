class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int s=0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(n%(i+1)==0){
                s = s + pow(nums[i],2);
            }
        }
        return s;
    }
};