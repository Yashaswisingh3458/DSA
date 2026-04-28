class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int temp =0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n%2==0){
            temp = (nums[n/2]+nums[n/2-1])/2;
        }
        else{
            temp = nums[n/2];
        }
        int y=0;
        for(int i =0;i<n;i++){
            y+=abs(nums[i]-temp);
        }
        return y;
    }
};