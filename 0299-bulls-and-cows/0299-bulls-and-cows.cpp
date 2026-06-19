class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>s;
        for(int i =0;i<secret.size();i++){
            s[secret[i]]+=1;
        }
        int y =0;
        int q =0;
        for(int i =0;i<guess.size();i++){
            if(guess[i]==secret[i]){
                y+=1;
                s[guess[i]]-=1;
            }
        }
        for(int i =0;i<guess.size();i++){
            if(guess[i]!=secret[i] && s[guess[i]]>0){
                q+=1;
                s[guess[i]]-=1;
            }
        }
        string ans=to_string(y) + "A" + to_string(q) + "B";
        return ans;
    }
};