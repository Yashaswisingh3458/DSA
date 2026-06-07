class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        for(int i =0;i<nums.size();i++){
            int s1=0;
            for(int s=0;s<i;s++){
                s1+=nums[s];
            }
            int s2=0;
            for(int s=i+1;s<nums.size();s++){
                s2+=nums[s];
            }
            ans.push_back(abs(s2-s1));
        }
        return ans;
    }
};