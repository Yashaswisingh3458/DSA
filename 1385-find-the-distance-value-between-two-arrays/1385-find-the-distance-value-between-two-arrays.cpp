class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ys=0;
        for(int i =0;i<arr1.size();i++){
            int c=0;
            for(int s=0;s<arr2.size();s++){
                if(abs(arr1[i]-arr2[s])<= d){
                    c=1;
                    break;
                }
            }
            if(c==0){
                ys+=1;
            }
        }
        return ys;
    }
};