class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int y=0;
        sort(arr.begin(),arr.end());
        int i =0;
        while(i<arr.size() && arr[i]!=1){
            i+=1;
        }
        if(i<arr.size()){
            swap(arr[0],arr[i]);
        }
        else{
            arr[0]=1;
        }
        int s=0;
        for(int i =0;i<arr.size();i++){
            if(arr[i]>=s){
                s=min(arr[i],s+1);
            }
        }
        return s;
    }
};