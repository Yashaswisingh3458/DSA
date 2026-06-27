class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int>s;
        unordered_map<int,int>y;
        for(int i =0;i<arr.size();i++){
            y[arr[i]]+=1;
        }
        for(int i =0;i<arr.size();i++){
            if(y[arr[i]]!=-1){
                s.push_back(y[arr[i]]);
                y[arr[i]]=-1;
            }
        }
        sort(s.begin(),s.end());
        int ans =0;
        int ys=0;
        for(int i =s.size()-1;i>=0;i--){
            ys += s[i];
            ans+=1;
            if(ys>=arr.size()/2){
                break;
            }
        }
        return ans;
    }
};