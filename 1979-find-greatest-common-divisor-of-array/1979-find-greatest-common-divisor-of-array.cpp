class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        int s = nums[0];
        int y= nums[nums.size()-1];
        int c=1;
        for(int i =1;i<=min(s,y);i++){
            if(s%i == 0 && y%i==0){
                c=i;
            }
        }
        return c;
    }
};