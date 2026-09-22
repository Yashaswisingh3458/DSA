class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int bit = 0; bit < 30; bit++) {
            int one = 0;
            for(int x : nums) {
                if(x & (1 << bit))
                    one++;
            }
            ans += one * (n - one);
        }
        return ans;
    }
};