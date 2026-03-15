class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int i = 0;

        while(i < nums.size() && k > 0){
            if(nums[i] < 0){
                nums[i] *= -1;
                k--;
            }
            i++;
        }

        sort(nums.begin(), nums.end());

        if(k % 2 == 1){
            nums[0] *= -1;
        }

        int s = 0;
        for(int i = 0; i < nums.size(); i++){
            s += nums[i];
        }

        return s;
    }
};