class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ys = 0;
        int n = nums.size();
        unordered_map<int,int>y;
        for(int i =0;i<n;i++){
            y[nums[i]]+=1;
        }
        for(int i = 0;i<n;i++){
            if(y[nums[i]]>=3 && nums[i]>0){
                int temp = 0;
                for(int s= i+1;s<n;s++){
                    if(nums[s]==nums[i]){
                        temp = s-i;
                        break;
                    }
                }
                int sy = 1;
                while(temp!=0 && i+(sy*temp)<n && nums[i+(sy*temp)] == nums[i]){
                    nums[i+(sy*temp)]=-1;
                    sy+=1;
                }
                if(sy>2 && sy == y[nums[i]]){
                    ys+=1;
                    nums[i]=-1;
                }
            }
        }
        return ys;
    }
};