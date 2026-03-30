class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string sq="";//odd for s1
        string yq="";//even for s1
        string ss="";//odd for s2
        string yy="";//even for s2
        for(int i=0;i<s1.size();i++){
            if(i%2==0){
                yq+=s1[i];
            }
            else{
                sq+=s1[i];
            }
        }
        for(int i=0;i<s2.size();i++){
            if(i%2==0){
                yy+=s2[i];
            }
            else{
                ss+=s2[i];
            }
        }
        sort(yq.begin(),yq.end());
        sort(sq.begin(),sq.end());
        sort(yy.begin(),yy.end());
        sort(ss.begin(),ss.end());
        if(yq==yy && ss==sq){
            return true;
        }
        return false;
    }
};