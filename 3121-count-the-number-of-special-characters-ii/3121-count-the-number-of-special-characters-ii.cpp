class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>up;
        unordered_map<char,int>low;
        for(int i =0;i<word.size();i++){
            up[word[i]]=-1;
            low[word[i]]=-1;
        }
        for(int i =0;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z'){
                char c= tolower(word[i]);

                if(up[c]==-1){
                    up[c]=i;
                }
            }
            if(word[i]>='a' && word[i]<='z'){
                low[word[i]]=i;
            }
        }
        int ans = 0;
        for(int i =0;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z'){
                char c = tolower(word[i]);
                if(up[c]>low[c]){
                    ans+=1;
                    up[c]=-1;
                }
            }
        }
        return ans; 
    }
};