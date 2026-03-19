class Solution {
public:
    double trimMean(vector<int>& arr) {
        int e = arr.size()*0.05;
        sort(arr.begin(),arr.end());
        int temp =e;
        while(temp!=0){
            arr.erase(arr.begin()+0);
            temp-=1;
        }
        temp =e;
        while(temp!=0){
            arr.erase(arr.begin()+arr.size()-1);
            temp-=1;
        }
        double s=0;
        for(int i=0;i<arr.size();i++){
            s+=arr[i];
        }
        double y=s/arr.size();
        return y;
    }
};