class Solution {
public:
    int partitionString(string s) {
        int y=0;
        int i =0;
        while(i<s.size()){
            unordered_map<char,int>ys;
            int temp =i;
            while(i<s.size() && ys[s[i]]==0){
                ys[s[i]]+=1;
                i+=1;
            }
            y+=1;
        }
        return y;
    }
};