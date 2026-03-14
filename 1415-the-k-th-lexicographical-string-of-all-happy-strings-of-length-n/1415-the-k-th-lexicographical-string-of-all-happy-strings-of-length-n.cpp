class Solution {
public:
    string getHappyString(int n, int k) {
        long long f=1;
        int total = pow(3,n);
        vector<string>ys;
        for(int i = 0; i < total; i++){
            int x = i;
            string s = "";
            for(int y = 0; y < n; y++){
                int r = x % 3;
                if(r == 0) s = 'a' + s;
                else if(r == 1) s = 'b' + s;
                else s = 'c' + s;
                x /= 3;
            }
            int c=0;
            for(int i =0;i<n-1;i++){
                if(s[i]==s[i+1]){
                    c=1;
                    break;
                }
            }
            if(c==0){
                ys.push_back(s);
            }
        }
        if(k>ys.size()){
            return "";
        }
        else{
            sort(ys.begin(),ys.end());
        }
        return ys[k-1];
    }
};