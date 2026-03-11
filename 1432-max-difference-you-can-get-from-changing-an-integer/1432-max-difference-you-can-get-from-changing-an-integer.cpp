class Solution {
public:
    int maxDiff(int num) {
        string temp = to_string(num);
        string s = temp;
        string y = temp;

        // maximum
        char c = 0;
        for(char ch : temp){
            if(ch != '9'){
                c = ch;
                break;
            }
        }

        if(c){
            for(char &ch : s){
                if(ch == c) ch = '9';
            }
        }

        // minimum
        if(temp[0] != '1'){
            for(char &ch : y){
                if(ch == temp[0]) ch = '1';
            }
        }
        else{
            char d = 0;
            for(int i=1;i<temp.size();i++){
                if(temp[i] != '0' && temp[i] != '1'){
                    d = temp[i];
                    break;
                }
            }

            if(d){
                for(int i=1;i<temp.size();i++){
                    if(y[i] == d) y[i] = '0';
                }
            }
        }

        return stoi(s) - stoi(y);
    }
};