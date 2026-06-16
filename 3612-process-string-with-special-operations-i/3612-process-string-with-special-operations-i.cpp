class Solution {
public:
    string processStr(string s) {
        string y = "";
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                if(y.size()>0){
                    y.pop_back();
                }
            }
            else if(s[i]=='#'){
                y+=y;
            }
            else if(s[i]=='%'){
                reverse(y.begin(),y.end());
            }
            else{
                y+=s[i];
            }
        }
        return y;
    }
};