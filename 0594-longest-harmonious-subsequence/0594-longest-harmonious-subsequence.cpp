class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>s;
        for(int i=0;i<nums.size();i++){
            s[nums[i]]+=1;
        }
        int y=0;
        for(int i =0;i<nums.size();i++){
            if(s[nums[i]-1] == 0){
                continue;
            }
            else{
                y=max(y , s[nums[i]]+s[nums[i]-1]);
            }
        }
        return y;
    }
};