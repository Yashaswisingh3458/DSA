class Solution {
public:
    int minMaxDifference(int num) {
        string temp = to_string(num);
        string s = temp;
        string y = temp;

        char c = temp[0];
        int t = 0;

        while(t < temp.size() && temp[t] == '9'){
            t++;
        }

        if(t < temp.size()) c = temp[t];

        for(int i=0;i<temp.size();i++){
            if(temp[i]==c){
                s[i]='9';
            }
            if(temp[i]==temp[0]){
                y[i]='0';
            }
        }

        int a = stoi(s);
        int b = stoi(y);

        return a-b;
    }
};