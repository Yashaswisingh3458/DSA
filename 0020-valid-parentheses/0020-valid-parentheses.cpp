class Solution {
public:
    bool isValid(string s) {
        vector<char>stack;
        int c=0;
        for(int i =0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stack.push_back(s[i]);
                c +=1;
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(i==0 || c==0){
                    return false;
                }
                else if((s[i] == ')' && stack.back()!='(') || (s[i] == '}' && stack.back()!='{') || (s[i] == ']' && stack.back()!='[')){
                    return false;
                }
                else {
                    stack.pop_back();
                    c -=1;
                }
            }
        }
        if(c==0){
            return true;
        }
        else{
            return false;
        }
    }
};