class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int y=0;
        for(int i =0;i<nums.size();i++){
            for(int s=0;s<nums.size();s++){
                if(i!=s && nums[i]+nums[s] == target){
                   y+=1;
                }
            }
        }
        return y;
    }
};