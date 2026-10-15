class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ys=0;
        for(int i =0;i<nums.size();i++){
            for(int s=i;s<nums.size();s++){
                unordered_map<int,int>t;
                int sy=0;
                for(int q=i;q<=s;q++){
                    t[nums[q]]+=1;
                    if(t[nums[q]]==1){
                        sy+=1;
                    }
                }
                ys+=pow(sy,2);
            }
        }
        return ys;
    }
};