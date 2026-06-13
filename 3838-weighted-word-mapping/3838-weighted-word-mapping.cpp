class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char,int>s;
        unordered_map<int,char>z;
        int c=0;
        for(int i =0;i<26;i++){
            s['a'+i] = weights[i];
            z[i] = 'z' - i;
        }
        string q="";
        for(int i =0;i<words.size();i++){
            int ys=0;
            for(int y=0;y<words[i].size();y++){
                ys+= s[words[i][y]];
            }
            ys=ys%26;
            q+= z[ys];
        }
        return q;
    }
};