class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> temp(m, vector<int>(n));
        k=k%n;
        for(int i =0;i<m;i++){
            for(int s=0;s<n;s++){
                if(i%2==0){
                    temp[i][(s + k) % n] = mat[i][s];
                }
                else{
                    temp[i][(s - k + n) % n] = mat[i][s];
                }
            }
        }
        if(temp==mat){
            return true;
        }
        return false;
    }
};