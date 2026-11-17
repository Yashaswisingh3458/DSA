class Solution {
public:
    string digitSum(string s, int k) {
        string ys=s;
        while(ys.size() > k){
            int i = 0;
            string temp ="";
            while(i<ys.size()){
                string q="";
                for(int y=i;y<k+i;y++){
                    if(y<ys.size()){
                        q=q+ys[y];
                    }
                }
                int n = 0;
                for(int y=0;y<q.size();y++){
                    n=n+(q[y]-'0');
                }
                temp += to_string(n);
                i=i+k;
            }
            ys = temp;
        }
        return ys;
    }
};