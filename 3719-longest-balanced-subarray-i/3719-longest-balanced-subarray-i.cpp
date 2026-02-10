class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        unordered_map<int,int>s;
        for(int i =0;i<nums.size();i++){
            s[nums[i]]=1;
        }
        int ans=0;
        for(int i =0;i<nums.size();i++){
            int c=0;
            int y=0;
            int ys=0;
            for(int q=i;q<nums.size();q++){
                if(nums[q]%2==0 && s[nums[q]]==1){
                    c+=1;
                    s[nums[q]]+=1;
                }
                else if(nums[q]%2==1 && s[nums[q]]==1){
                    y+=1;
                    s[nums[q]]+=1;
                }
                else{
                    ys+=1;
                }
                if(c==y){
                    ans = max(ans,c+y+ys);
                }
            }
        }
        return ans;
    }
};