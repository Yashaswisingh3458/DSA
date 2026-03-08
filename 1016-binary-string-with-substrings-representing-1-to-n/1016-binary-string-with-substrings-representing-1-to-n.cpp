class Solution {
public:
    bool queryString(string s, int n) {
        unordered_map<string,int>ys;
        int nn = s.size();
        for(int i = 0; i < nn; i++){
            for(int len = 1; len <= nn-i; len++){
                ys[s.substr(i,len)]+=1;
            }
        }
        for(int i =1;i<=n;i++){
            int temp=i;
            string y="";
            while(temp!=0){
                y= to_string(temp%2)+y;
                temp=temp/2;
            }
            if(ys[y]==0){
                return false;
            }
        }
        return true;
    }
};