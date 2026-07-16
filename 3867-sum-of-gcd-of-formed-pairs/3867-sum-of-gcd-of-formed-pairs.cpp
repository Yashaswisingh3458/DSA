class Solution {
public:

    int gcd(int y,int ys){
        while(ys){
            int t= ys;
            ys =y%ys;
            y=t;
        }
        return y;
    }
    long long gcdSum(vector<int>& nums) {
        vector<int>prefixGcd;
        if(nums.size()==0){
            return 0;
        }
        int mx = nums[0];
        for(int i =0;i<nums.size();i++){
            int temp = max(nums[i],mx);
            int s = gcd(nums[i],temp);
            prefixGcd.push_back(s);
            mx = max(nums[i],mx);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        long long sum = 0;
        for(int i =0;i<prefixGcd.size()/2;i++){
                sum=sum+(gcd(prefixGcd[i],prefixGcd[prefixGcd.size()-i-1]));
        }
        return sum;
    }
    
};