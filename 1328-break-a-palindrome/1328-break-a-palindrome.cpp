class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1){
            return "";
        }
        int i=0;
        int c=0;
        while(i<palindrome.size()){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                c=1;
            }
            if(c>0){
                break;
            }
            i+=1;
        }
        if(c==0){
            palindrome[palindrome.size()-1]='b';
        }
        return palindrome;
    }
};