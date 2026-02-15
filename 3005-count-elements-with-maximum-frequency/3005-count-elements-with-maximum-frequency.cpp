class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>s;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            s[nums[i]]+=1;
        }
        int c=0;
        for(int i =0;i<nums.size();i++){
            c=max(c,s[nums[i]]);
        }
        int y=0;
        if(s[nums[0]]==c){
            y+=1;
        }
        for(int i =1;i<nums.size();i++){
            if(s[nums[i]]==c && nums[i]!=nums[i-1]){
                y+=1;
            }
        }
        return y*c;
    }
};