class Solution {
public:
    char findKthBit(int n, int k) {
        vector<string>s(21);
        s[0]="";
        s[1]="0";
        for(int i =2;i<=n;i++){
            string temp = s[i-1];
            for(int y =0;y<temp.size();y++){
                if(temp[y]=='0'){
                    temp[y]='1';
                }
                else{
                    temp[y]='0';
                }
            }
            reverse(temp.begin(),temp.end());
            s[i]=s[i-1]+'1'+temp;
        }
        return s[n][k-1];
    }
};