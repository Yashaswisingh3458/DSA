class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>s;
        for(int i =0;i<nums.size();i++){
            s[nums[i]]+=1;
        }
        vector<int>y;
        int temp = *min_element(nums.begin(),nums.end());
        int temp2= *max_element(nums.begin(),nums.end());
        for(int i =temp;i<temp2;i++){
            if(s[i]==0){
                y.push_back(i);
            }
        }
        return y;
    }
};