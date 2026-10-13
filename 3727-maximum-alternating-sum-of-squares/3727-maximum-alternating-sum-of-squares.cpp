class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        long long s=0;
        int i =0;
        int y=n-1;
        while(i<y){
            s+= pow(nums[y],2);
            s-= pow(nums[i],2);
            i+=1;
            y-=1;
        }
        if(n%2==1){
            s+=pow(nums[n/2],2);
        }
        return s;
    }
};