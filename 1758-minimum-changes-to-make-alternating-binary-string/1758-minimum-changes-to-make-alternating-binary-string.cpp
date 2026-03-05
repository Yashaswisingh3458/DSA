class Solution {
public:
    int minOperations(string s) {
        string ys="";
        int c=0;
        for(int i =0;i<s.size();i++){
            if(c==0){
                c=1;
                ys+='0';
            }
            else{
                ys+='1';
                c=0;
            }
        }
        int y=0;
        for(int i =0;i<s.size();i++){
            if(s[i]!=ys[i]){
                y+=1;
            }
        }
        int ans = min(y,(int)s.size()-y);
        return ans;
    }
};