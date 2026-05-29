class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int t = nums.size();
        for(int i =0;i<t;i++){
            int temp = nums[i];
            int n=0;
            while(temp!=0){
                n=n*10 + temp%10;
                temp = temp/10;
            }
            nums.push_back(n);
        }
        sort(nums.begin(),nums.end());
        int c=1;
        for(int i =1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                c+=1;
            }
        }
        return c;
    }
};