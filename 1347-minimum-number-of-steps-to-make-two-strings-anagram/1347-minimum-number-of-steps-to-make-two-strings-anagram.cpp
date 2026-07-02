class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>y;
        for(int i =0;i<s.size();i++){
            y[s[i]]+=1;
        }
        for(int i =0;i<t.size();i++){
            if(y[t[i]]>0){
                y[t[i]]-=1;
            }
        }
        int ys=0;
        for(int i =0;i<s.size();i++){
            ys+=y[s[i]];
            y[s[i]]=0;
        }
        return ys;
    }
};