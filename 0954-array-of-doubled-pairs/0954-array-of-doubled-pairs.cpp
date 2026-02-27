class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int>s;
        for(int i =0;i<arr.size();i++){
            s[arr[i]]+=1;
        }
        sort(arr.begin(),arr.end());
        int y=0;
        for(int i =0;i<arr.size();i++){
            if(s[(arr[i]*2)]>0 && s[arr[i]]>0){
                s[arr[i]]-=1;
                if(s[arr[i]*2]>0){
                    s[arr[i]*2]-=1;
                    y+=1;
                }
                else{
                    continue;
                }
            } 
        }
        if(y==arr.size()/2){
            return true;
        }
        else{
            return false;
        }
    }
};