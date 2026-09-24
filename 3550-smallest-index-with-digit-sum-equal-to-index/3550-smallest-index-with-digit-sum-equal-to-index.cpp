class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            int s = nums[i];
            int y =0;
            while(s!=0){
                y+=s%10;
                s /=10;
            }
            if(y==i){
                return i;
            }
        }
        return -1;
    }
};