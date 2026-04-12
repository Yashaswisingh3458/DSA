class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0){
            return false;
        }
        sort(nums.begin(),nums.end());
        unordered_map<int,int>ys;
        for(int i =0;i<nums.size();i++){
            ys[nums[i]]+=1;
        }
        int temp = nums.size()/k;
        for(int i =0;i<temp;i++){
            int y=nums[0];
            for(int s=0;s<k;s++){
                if(ys[y+s]>0){
                    ys[y+s]-=1;
                    auto it = find(nums.begin(), nums.end(), y+s);
                    if (it != nums.end()) nums.erase(it);
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};