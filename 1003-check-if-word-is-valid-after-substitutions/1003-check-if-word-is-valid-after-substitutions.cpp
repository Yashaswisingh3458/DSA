class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i =0;i<s.size();i++){
            if(s[i]=='c' && !st.empty()){
                if(!st.empty() && st.top() == 'b'){
                    st.pop();
                    if(!st.empty() && st.top()== 'a'){
                        st.pop();
                    }
                    else{
                        st.push('b');
                    }
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};