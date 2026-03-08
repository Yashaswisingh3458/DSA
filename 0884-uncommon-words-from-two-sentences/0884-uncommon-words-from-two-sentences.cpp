class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>s;
        vector<string>ys;
        for(int i =0;i<s1.size();i++){
            string y="";
            while(i<s1.size() && s1[i]!=' '){
                y+=s1[i];
                i+=1;
            }
            s[y]+=1;
        }
        for(int i =0;i<s2.size();i++){
            string y="";
            while(i<s2.size() && s2[i]!=' '){
                y+=s2[i];
                i+=1;
            }
            s[y]+=1;
        }
        for(int i =0;i<s1.size();i++){
            string y="";
            while(i<s1.size() && s1[i]!=' '){
                y+=s1[i];
                i+=1;
            }
            if(s[y]==1){
                ys.push_back(y);
            }
        }
        for(int i =0;i<s2.size();i++){
            string y="";
            while(i<s2.size() && s2[i]!=' '){
                y+=s2[i];
                i+=1;
            }
            if(s[y]==1){
                ys.push_back(y);
            }
        }
        return ys;
    }
};