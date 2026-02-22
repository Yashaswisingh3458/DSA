class Solution {
public:
    int binaryGap(int n) {
        int ans =0;
        int c=0;
        string s = "";
        while(n!=0){
            s =to_string(n%2) + s;
            n=n/2;
        }
        for(int i =0;i<s.size();i++){
            if(s[i]=='1'){
                c+=1;
            }
        }
        if(c<2){
            return 0;
        }
        c=0;
        for(int i =0;i<s.size();i++){
            while(i<s.size() && s[i]!='1'){
                c+=1;
                i+=1;
            }
            if(i<s.size()){
                ans = max(ans,c);
                c=0;
            }
        }
        return ans+1;
    }
};