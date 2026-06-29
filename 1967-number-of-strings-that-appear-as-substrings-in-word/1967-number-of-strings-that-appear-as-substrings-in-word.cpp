class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        unordered_map<string,int>s;
        for(int i=0;i<word.size();i++){
            string y="";
            for(int q=i;q<word.size();q++){
                y+=word[q];
                s[y]+=1;
            }
        }
        int ys=0;
        for(int i =0;i<patterns.size();i++){
            if(s[patterns[i]]>0){
                ys+=1;
            }
        }
        return ys;
    }
};