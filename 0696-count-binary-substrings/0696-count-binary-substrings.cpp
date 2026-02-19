class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>y;
        int ans=0;
        int c=0;
        int i=0;
        while(i<s.size()){
            if(s[i]=='0'){
                while(i<s.size() && s[i]=='0'){
                    c+=1;
                    i+=1;
                }
            }
            else{
                while(i<s.size() && s[i]=='1'){
                    c+=1;
                    i+=1;
                }
            }
            y.push_back(c);
            c=0;
        }
        for(int i =0;i< y.size()-1;i++){
            ans+= min(y[i],y[i+1]);
        }
        return ans;
    }
};