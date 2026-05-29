class Solution {
public:
    bool areNumbersAscending(string s) {
        int num = INT_MIN;
        int i =0;
        while(i<s.size()){
            if(s[i]>='0' && s[i]<='9'){
                string temp = "";
                while(s[i]>='0' && s[i]<='9'){
                    temp += s[i];
                    i+=1;
                }
                int n = stoi(temp);
                if(n<=num){
                    return false;
                }
                num = n;
            }
            i+=1;
        }
        return true;
    }
};