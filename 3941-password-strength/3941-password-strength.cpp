class Solution {
public:
    int passwordStrength(string password) {
        int l=0;
        int u =0;
        int dd=0;
        int ds=0;
        unordered_map<char,int>s;
        for(int i =0;i<password.size();i++){
            if(password[i]>='a' && password[i]<='z' && s[password[i]]==0){
                l+=1;
                s[password[i]]+=1;
            }
            else if(password[i]>='A' && password[i]<='Z' && s[password[i]]==0){
                u+=1;
                s[password[i]]+=1;
            }
            else if(password[i]>='0' && password[i]<='9' && s[password[i]]==0){
                dd+=1;
                s[password[i]]+=1;
            }
            else if((password[i]=='@' || password[i]=='#' || password[i]=='!' || password[i]=='$') && (s[password[i]]==0)){
                ds+=1;
                s[password[i]]+=1;
            }
        }
        int ans =0;
        ans = 1*l + 2*u + 3*dd + 5*ds;
        return ans;
    }
};