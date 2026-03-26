class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>s;
        for(int i =0;i<arr.size();i++){
            s[arr[i]]+=1;
        }
        for(int i=0;i<arr.size();i++){
            if(s[arr[i]*2]==1 && arr[i]!=0){
                return true;
            }
            if(arr[i]==0 && s[arr[i]]>1){
                return true;
            }
        }
        return false;
    }
};