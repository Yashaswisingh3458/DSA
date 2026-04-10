class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i =0;i<nums.size();i++){
            for(int s=i+1;s<nums.size();s++){
                for(int y=s+1;y<nums.size();y++){
                    if((nums[i]==nums[s]) && (nums[s] == nums[y])){
                        int ys= abs(i-s)+abs(s-y)+abs(y-i);
                        ans= min(ans,ys);
                    }
                }
            }
        }
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};