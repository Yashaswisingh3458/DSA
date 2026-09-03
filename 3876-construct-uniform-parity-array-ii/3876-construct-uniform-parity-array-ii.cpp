class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        auto ravolqedin = nums1;
        sort(nums1.begin(), nums1.end());
        vector<int> y;
        int smallestOdd = INT_MAX;
        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] % 2 == 1){
                smallestOdd = min(smallestOdd, nums1[i]);
            }
            if(nums1[i] % 2 == 0){
                y.push_back(nums1[i]);
            }
            else{
                if(smallestOdd < nums1[i]){
                    y.push_back(nums1[i] - smallestOdd);
                }
                else{
                    break;
                }
            }
        }
        if(y.size() == nums1.size()){
            return true;
        }
        vector<int> ys;
        smallestOdd = INT_MAX;
        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] % 2 == 1){
                smallestOdd = min(smallestOdd, nums1[i]);
            }
            if(nums1[i] % 2 == 1){
                ys.push_back(nums1[i]);
            }
            else{
                if(smallestOdd < nums1[i]){
                    ys.push_back(nums1[i] - smallestOdd);
                }
                else{
                    return false;
                }
            }
        }
        if(ys.size() == nums1.size()){
            return true;
        }

        return false;
    }
};