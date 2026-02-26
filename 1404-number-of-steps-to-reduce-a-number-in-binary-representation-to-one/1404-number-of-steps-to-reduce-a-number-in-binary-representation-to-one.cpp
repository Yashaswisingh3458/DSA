class Solution {
public:
    int numSteps(string s) {
        int c=0;
        int ys=0;
        for(int i =s.size()-1;i>0;i--){
            if(s[i]=='1' && c==1){
                ys+=1;
                c=1;
            }
            else if(s[i]=='1' && c==0){
                ys+=2;
                c=1;
            }
            else if(s[i]=='0' && c==0){
                ys+=1;
                c=0;
            }
            else if(s[i]=='0' && c==1){
                ys+=2;
                c=1;
            }
        }
        return c+ys;
    }
};