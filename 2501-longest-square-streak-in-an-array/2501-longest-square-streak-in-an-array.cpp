class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int>s;
        for(int i =0;i<nums.size();i++){
            s[nums[i]]+=1;
        }
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            long long temp =nums[i];
            int c=0;
            while(s[temp]>0){
                if(temp > 1e5) break;
                temp = temp*temp;
                c+=1;
            }
            ans = max(c,ans);
        }
        return ans>1?ans:-1;
    }
};