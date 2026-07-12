class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0){
            return arr;
        }
        unordered_map<int,int>s;
        vector<int>y;
        y=arr;
        sort(y.begin(),y.end());
        int ys=1;
        s[y[0]]=1;
        for(int i =1;i<y.size();i++){
            if(y[i]>y[i-1]){
                ys+=1;
                s[y[i]] = ys;
            }
            else{
                s[y[i]] = ys;
            }
        }
        for(int i =0;i<arr.size();i++){
            y[i] = s[arr[i]];
        }
        return y;
    }
};