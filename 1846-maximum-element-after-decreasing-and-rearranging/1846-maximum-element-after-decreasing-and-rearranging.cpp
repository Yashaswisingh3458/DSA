class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int y=0;
        sort(arr.begin(),arr.end());
        arr[0]=1;
        int s=0;
        for(int i =0;i<arr.size();i++){
            if(arr[i]>=s){
                s=min(arr[i],s+1);
            }
        }
        return s;
    }
};