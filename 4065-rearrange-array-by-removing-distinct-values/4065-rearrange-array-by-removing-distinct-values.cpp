class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ys;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        while(ys.size()<n){
            unordered_map<int,int>s;
            for(int i =0;i<nums.size();i++){
                s[nums[i]]+=1;
            }
            for(int i =0;i<nums.size();i++){
                if(s[nums[i]]>0){
                    ys.push_back(nums[i]);
                    s[nums[i]]=0;
                    nums.erase(nums.begin()+i);
                    i-=1;
                }
            }
        }
        return ys;
    }
};