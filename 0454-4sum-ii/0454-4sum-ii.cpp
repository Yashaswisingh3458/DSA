class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>s;
        for(int i = 0;i<nums4.size();i++){
            s[nums4[i]]+=1;
        }
        int ys = 0;
        for(int i =0;i<nums1.size();i++){
            for(int y = 0;y<nums2.size();y++){
                for(int q = 0;q<nums3.size();q++){
                    int temp = nums1[i]+nums2[y]+nums3[q];
                    if(s[0-temp]>0){
                        ys += s[0-temp];
                    }
                }
            }
        }
        return ys;
    }
};