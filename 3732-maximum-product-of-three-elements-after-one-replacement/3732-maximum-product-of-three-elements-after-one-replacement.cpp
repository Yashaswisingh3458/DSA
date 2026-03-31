class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        transform(nums.begin(), nums.end(), nums.begin(), [](int x) {
            return abs(x);
        });
        sort(nums.begin(),nums.end());
        int temp = pow(10,5);
        long long y=1;
        int s=0;
        for(int i =nums.size()-1;i>=0;i--){
            if(nums[i]!=0){
                y=y*nums[i];
                s+=1;
            }
            if(s==2){
                break;
            }
        }
        if(s<2){
            return 0;
        }
        return y*temp;
    }
};