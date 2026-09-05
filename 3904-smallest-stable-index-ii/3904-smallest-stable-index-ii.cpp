class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ma = INT_MIN;
        int mi = INT_MAX;
        int n = nums.size();
        unordered_map<int,int>s;
        for(int i =0;i<n;i++){
            ma = max(ma,nums[i]);
            s[i]=ma;
        }
        int ans = -1;
        for(int i =n-1;i>=0;i--){
            mi=min(mi,nums[i]);
            int temp = s[i]-mi;
            if(temp<=k){
                ans = i;
            }
        }
        return ans;
    }
};