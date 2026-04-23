class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum =0;
        int n=nums.size();
        for(int i =0;i<n;i++){
            sum += nums[i];
        }
        int s1=0;
        vector<int>s;
        for(int i =0;i<n;i++){
            int temp = (nums[i]*i - s1)+ ((sum-s1-nums[i])-nums[i]*(n-i-1));
            s1+=nums[i];
            s.push_back(temp);
        }
        return s;
    }
};