class Solution {
public:
    int countValidPrefixes(string s) {
        int z=0;
        int o = 0;
        int ys =0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='0'){
                z+=1;
            }
            else{
                o+=1;
            }
            if(abs(z-o)<=1){
                ys+=1;
            }
        }
        return ys;
    }
};