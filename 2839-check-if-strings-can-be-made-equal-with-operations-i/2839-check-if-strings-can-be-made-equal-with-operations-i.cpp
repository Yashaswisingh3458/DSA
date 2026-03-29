class Solution {
public:
    bool canBeEqual(string s1, string s2) {

        unordered_map<char,int>y;
        for(int i =0;i<s1.size();i++){
            y[s1[i]]+=1;
        }
        for(int i =0;i<s2.size();i++){
            y[s2[i]]-=1;
        }
        for(int i =0;i<s1.size();i++){
            if(y[s1[i]]>0){
                return false;
            }
        }

        if((s1[0]!= s2[0] && s1[0]!=s2[2])||(s1[1]!=s2[1] && s1[1]!=s2[3])||(s1[2]!=s2[0] && s1[2]!=s2[2])||(s1[3]!=s2[3] && s1[3]!=s2[1])){
            return false;
        }
        else{
            return true;
        }
    }
};