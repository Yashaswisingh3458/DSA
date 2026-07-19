class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        if(n>=0 && n<10){
            return n;
        }
        string s = to_string(n);
        for(int i =s.size()-1;i>0;i--){
            if(s[i]<s[i-1]){
                s[i-1]-=1;
                for(int y = i;y<s.size();y++){
                    s[y]='9';
                }
            }
        }
        return stoi(s);
    }
};