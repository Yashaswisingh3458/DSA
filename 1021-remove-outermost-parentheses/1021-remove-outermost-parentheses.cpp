class Solution {
public:
    string removeOuterParentheses(string s) {
        string str = "";
        int c =0;
        int y =0;
        for(int i =0;i<s.size();i++){
            if((i==0 || y==0) && (s[i]=='(')){
                y=y+1;
            }
            else if(s[i]=='(' && y>0){
                c=c+1;
                str += s[i];
            }
            else if(s[i]==')' && y>0 && c>0){
                c=c-1;
                str += s[i];
            }
            else if(c==0 && s[i]==')'){
                y=y-1;
            }
        }
        return str;
    }
};