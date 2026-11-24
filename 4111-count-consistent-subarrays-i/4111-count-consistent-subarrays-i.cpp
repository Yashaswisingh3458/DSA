class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int ys = 0;
        for(int i =0;i<nums.size();i++){
            for(int s=i;s<nums.size();s++){
                int q=*min_element(nums.begin()+i,nums.begin()+s+1);
                int n = 255;
                for(int t=i;t<=s;t++){
                    n = n & nums[t];
                }
                if(n==q){
                    ys+=1;
                }
            }
        }
        return ys;
    }
};