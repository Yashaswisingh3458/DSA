class Solution {
public:
    int balancedStringSplit(string s) {
        int y=0;
        int q=0;
        int e=0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='R'){
                q+=1;
            }
            else{
                e+=1;
            }
            if(q==e){
                y+=1;
                e=q=0;
            }
        }
        return y;
    }
};