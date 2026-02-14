class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int y=0;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                nums.erase(nums.begin()+i);
                y+=1;
            }
        }
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                y+=1;
            }
        }
        if(y>1){
            return false;
        }
        else{
            return true;
        }
    }
};