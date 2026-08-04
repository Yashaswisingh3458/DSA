class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ys;
        sort(nums.begin(),nums.end());
        int y = nums[0];
        int s = nums[nums.size()-1];
        int temp = y;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=temp){
                ys.push_back(temp);
                i-=1;
            }
            temp+=1;
        }
        return ys;
    }
};