class Solution {
public:
    bool checkOnesSegment(string s) {
        int c=0;
        if(s.size()>0 && s[0]=='0'){
            return false;
        }
        for(int i =0;i<s.size();i++){
            if(s[i]=='1' && c>0){
                return false;
            }
            else if(s[i]=='0'){
                c+=1;
            }
        }
        return true;
    }
};