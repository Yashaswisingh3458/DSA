class Solution {
public:
    int reverseDegree(string s) {
        int ys=0;
        unordered_map<char,int>y;
        int ss =0;
        for(char i = 'a'; i<='z';i++){
            y[i]=26-ss;
            ss+=1;
        }
        for(int i =0;i<s.size();i++){
            ys = ys + ((i+1)*y[s[i]]);
        }
        return ys;
    }
};