class Solution {
public:
    int countConsistent(vector<int>& nums){
        int ys=0;
        for(int i =0;i<nums.size();i++){
            for(int s=i;s<nums.size();s++){
                int n=255;
                int t=*min_element(nums.begin()+i,nums.begin()+s+1);
                for(int q=i;q<=s;q++){
                    n=n&nums[q];
                }
                if(n==t){
                    ys+=1;
                }
            }
        }
        return ys;
    }
};