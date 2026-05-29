class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";
        for(int i =0;i<s.size();i++){
            temp += to_string(s[i] - 96);
        }
        while(k!=0){
            int num =0;
            for(int i =0;i<temp.size();i++){
                num = num + (temp[i]-'0');
            }
            k-=1;
            temp = to_string(num);
        }
        return stoi(temp);
    }
};