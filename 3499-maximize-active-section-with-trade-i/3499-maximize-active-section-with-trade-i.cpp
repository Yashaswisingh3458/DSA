class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int y = 0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='1'){
                y+=1;
            }
        }
        int z=0;
        int i=0;
        while(i<s.size()){
            int ys=0;
            if(s[i]=='0'){
                while(i<s.size() && s[i]=='0'){
                    ys+=1;
                    i+=1;
                }
                while(i<s.size() && s[i]=='1'){
                    i+=1;
                }
                if(i>=s.size()){
                    ys=0;
                }
                int temp = i;
                while(temp<s.size() && s[temp]=='0'){
                    temp+=1;
                    ys+=1;
                }
            }
            else{
                i+=1;
            }
            z=max(z,ys);
        }
        return z+y;
    }
};