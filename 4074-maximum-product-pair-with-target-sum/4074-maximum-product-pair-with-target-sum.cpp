class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int y=-1;
        int s=-1;
        for(int i=0;i<nums.size();i++){
            for(int q=0;q<nums.size();q++){
                if(nums[i]>nums[q] && nums[i]+nums[q] == target){
                    if(y==-1 && s==-1){
                        y=i;
                        s=q;
                    }
                    else if(nums[s]*nums[y]<nums[i]*nums[q]){
                        y=i;
                        s=q;
                    }
                }
            }
        }
        vector<int>ys;
        ys.push_back(y);
        ys.push_back(s);
        return ys;
    }
};