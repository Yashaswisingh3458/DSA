class Solution {
public:
    bool isGood(vector<int>& nums) {
        int m = *max_element(nums.begin(),nums.end());
        unordered_map<int,int>s;
        for(int i =0;i<nums.size();i++){
            s[nums[i]]+=1;
            if(s[nums[i]]>1){
                if(s[nums[i]]==2 && nums[i]==m){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(s[m]!=2){
            return false;
        }
        for(int i =1;i<m;i++){
            if(s[i]!=1){
                return false;
            }
        }
        return true;
    }
};