class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<string,int>s;
        int y=0;
        for(int i =0;i<dominoes.size();i++){
            string t="";
            t+=dominoes[i][0]+'0';
            t+=dominoes[i][1]+'0';
            string q = t;
            reverse(q.begin(),q.end());
            if(s[t]>0){
                y+=s[t];
            }
            if(q!=t && s[q]>0){
                y+=s[q];
            }
            s[t]+=1;
        }
        return y;
    }
};