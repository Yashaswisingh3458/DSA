class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>s;
        for(int i =0;i<nums.size();i++){
            s[nums[i]]+=1;
            if(s[nums[i]]>1){
                return nums[i];
            }
        }
        return 0;
    }
};