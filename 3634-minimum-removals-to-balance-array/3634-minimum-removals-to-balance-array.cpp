class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int l = 0;
        int best = 0;

        for(int r = 0; r < n; r++){
            while((long long)nums[r] > (long long)nums[l] * k){
                l++;
            }
            best = max(best, r - l + 1);
        }

        return n - best;
    }
};
