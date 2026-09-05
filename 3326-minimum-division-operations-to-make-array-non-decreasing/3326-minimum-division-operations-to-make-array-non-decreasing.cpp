// class Solution {
// public:

//     int maxDivisor(int s){
//         for(int i=2; i*i<=s; i++){
//             if(s%i == 0){
//                 return i;
//             }
//         }
//         return s;
//     }
//     int minOperations(vector<int>& nums) {
//         int y = 0;
//         for(int i=0;i<nums.size()-1; i++){
//             if(i>=0 && nums[i]>nums[i+1]){
//                 nums[i] = maxDivisor(nums[i]);
//                 if(nums[i]>nums[i+1]){
//                     return -1;
//                 }
//                 else{
//                     y+=1;
//                 }
//                 i-=2;
//             }
//         }
//         return yx;
//     }
// };
class Solution {
public:

    int maxDivisor(int s){
        for(int i = 2; i * i <= s; i++){
            if(s % i == 0){
                return i;   // smallest prime factor
            }
        }
        return s;           // s is prime
    }

    int minOperations(vector<int>& nums) {
        int y = 0;

        for(int i = nums.size() - 2; i >= 0; i--){

            if(nums[i] > nums[i + 1]){

                int s = maxDivisor(nums[i]);

                // prime -> cannot be reduced
                if(s == nums[i])
                    return -1;

                nums[i] = s;
                y++;

                // Still greater -> impossible
                if(nums[i] > nums[i + 1])
                    return -1;
            }
        }

        return y;
    }
};