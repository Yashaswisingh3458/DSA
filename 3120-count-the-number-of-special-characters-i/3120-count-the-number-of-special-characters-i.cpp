class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>s;
        int ans =0;
        for(int i =0;i<word.size();i++){
            s[word[i]]+=1;
        }
        for(int i =0;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z'){
                char c=tolower(word[i]);
                if(s[c]>0){
                    ans+=1;
                    s[c]=0;
                }
            }
        }
        return ans;
    }
};