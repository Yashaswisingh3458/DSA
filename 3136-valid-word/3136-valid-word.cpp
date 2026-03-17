class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3){
            return false;
        }
        int v=0;
        int c=0;
        int s=0;
        for(int i =0;i<word.size();i++){
            if((word[i]>='a' && word[i]<='z')|| (word[i]>='A' && word[i]<='Z') || (word[i]>='0' && word[i]<='9')){
                s+=1;
            }
            if(word[i]=='a' || word[i]=='A' || word[i]=='E' || word[i]=='e' || word[i]=='i' || word[i]=='O' || word[i]=='U' || word[i]=='I' || word[i]=='o' || word[i]=='u'){
                v+=1;
            }
            else if((word[i]>='A' && word[i]<='Z')||((word[i]>='a' && word[i]<='z'))){
                c+=1;
            }
        }
        if(c==0 || v==0){
            return false;
        }
        if(s<word.size()){
            return false;
        }
        return true;
    }
};