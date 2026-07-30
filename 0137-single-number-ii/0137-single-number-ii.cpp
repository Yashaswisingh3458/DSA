class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int temp = 0;
        unordered_map<int,int>s;
        for(int i =0;i<nums.size();i++){
            s[nums[i]]+=1;
        }
        for(int i =0;i<nums.size();i++){
            if(s[nums[i]]==1){
                temp = nums[i];
            }
        }
        return temp;
    }
};