class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k){
            return false;
        }
        unordered_map<string,int>q;
        int c=0;
        for(int i=0;i<=s.size()-k;i++){
            string ys="";
            for(int y=i;y<k+i;y++){
                ys+=s[y];
            }
            if(q[ys]==0){
                q[ys]+=1;
                c+=1;
            }
        }
        if(c==(1<<k)){
            return true;
        }
        else{
            return false;
        }
    }
};