class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            sum += nums[i];
        }
        long long s = 0;
        for(int i =0;i<n/2;i++){
            s+=nums[i];
        }
        int ys=0;
        for(int i =0;i<n;i++){
            if(sum-s < s){
                ys+=1;
            }
            s -= nums[i];
            s += nums[(n/2 + i)%n];
        }
        return ys;
    }
};