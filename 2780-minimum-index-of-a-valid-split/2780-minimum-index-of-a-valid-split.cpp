class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>s;
        int y =INT_MIN;
        for(int i =0;i<nums.size();i++){
            s[nums[i]]+=1;
            if(s[nums[i]]>nums.size()/2){
                y=nums[i];
            }
        }
        if(y==INT_MIN){
            return -1;
        }
        int ys = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==y){
                ys+=1;
                if(ys > (i+1)/2){
                    int temp = s[y] - ys;
                    if(temp > (nums.size() - i - 1)/2){
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};