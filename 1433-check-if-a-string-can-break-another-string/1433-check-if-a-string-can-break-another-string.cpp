class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int c=0;
        for(int i =0;i<s1.size();i++){
            if(s1[i]<s2[i]){
                c=1;
                break;
            }
        }
        if(c==0){
            return true;
        }
        for(int i=0;i<s1.size();i++){
            if(s1[i]>s2[i] && c==1){
                return false;
            }
        }
        return true;
    }
};