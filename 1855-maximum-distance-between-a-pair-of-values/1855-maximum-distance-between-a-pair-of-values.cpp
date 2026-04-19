class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, s = 0;
        int n1 = nums1.size(), n2 = nums2.size();
        int ans = 0;

        while(i < n1 && s < n2) {
            if(nums1[i] <= nums2[s]) {
                ans = max(ans, s - i);
                s++;
            } 
            else {
                i++;
            }
        }
        return ans;
    }
};