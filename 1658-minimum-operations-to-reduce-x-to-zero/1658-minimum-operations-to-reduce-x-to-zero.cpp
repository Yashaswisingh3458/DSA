class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }

    int temp = sum - x;
    if(temp < 0) return -1;

    int ans = -1;
    int curr = 0, left = 0;

    for(int right = 0; right < nums.size(); right++){
        curr += nums[right];

        while(curr > temp && left <= right){
            curr -= nums[left];
            left++;
        }

        if(curr == temp){
            ans = max(ans, right - left + 1);
        }
    }

    if(ans == -1) return -1;
    return nums.size() - ans;
    }
};