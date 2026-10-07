class Solution {
public:
    int minRotations(string s) {
        vector<int>y;
        for(int i =0;i<10;i++){
            y.push_back(s[i]-'0');
        }
        int ys=min(y[0],10-y[0]);
        for(int i =0;i<9;i++){
            if(y[i]!=y[i+1]){
                ys = ys + min(abs(y[i+1]-y[i]),min(y[i]+(9-y[i+1]+1),9-y[i]+1+y[i+1]));
            }
        }
        return ys;
    }
};