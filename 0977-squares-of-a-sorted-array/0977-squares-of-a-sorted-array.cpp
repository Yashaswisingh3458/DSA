class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>s;
        for(int i =0;i<nums.size();i++){
            int temp = pow(nums[i],2);
            s.push_back(temp);
        }
        sort(s.begin(),s.end());
        return s;
    }

};