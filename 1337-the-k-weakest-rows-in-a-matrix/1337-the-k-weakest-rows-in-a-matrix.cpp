class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>s;
        for(int i =0;i<mat.size();i++){
            int c=0;
            for(int y=0;y<mat[i].size();y++){
                if(mat[i][y]==1){
                    c+=1;
                }
            }
            s.push_back(c);
        }
        vector<int>y;
        for(int i =0;i<s.size();i++){
            int c=0;
            for(int q=0;q<s.size();q++){
                if(s[i]>s[q] || (s[i]==s[q] && i>q)){
                    c+=1;
                }
            }
            y.push_back(c);
        }
        vector<pair<int,int>>q;
        for(int i =0;i<s.size();i++){
            q.push_back({y[i],i});
        }
        sort(q.begin(),q.end());
        vector<int>ys(k);
        for(int i =0;i<k;i++){
            ys[i]=q[i].second;
        }
        return ys;
    }
};