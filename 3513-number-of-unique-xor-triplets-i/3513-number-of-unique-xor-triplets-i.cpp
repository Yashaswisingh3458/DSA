class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = *max_element(nums.begin(),nums.end());
        if(n<=2){
            return n;
        }
        int y =0;
        while(n!=0){
            y+=1;
            n=n/2;
        }
        int s = pow(2,y);
        return s;
    }
};