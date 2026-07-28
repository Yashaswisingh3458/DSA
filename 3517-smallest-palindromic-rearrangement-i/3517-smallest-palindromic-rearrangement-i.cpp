class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1){
            return s;
        }
        char temp = '\0';
        if(s.size()%2==1){
            temp = s[s.size()/2];
        }
        int i =0;
        string y="";
        while(i<s.size()/2){
            y+=s[i];
            i+=1;
        }
        sort(y.begin(),y.end());
        string q = y;
        reverse(q.begin(),q.end());
        string ys = "";
        if(s.size()%2==1){
            ys = y+temp+q;
        }
        else{
            ys= y+q;
        }
        return ys;
    }
};