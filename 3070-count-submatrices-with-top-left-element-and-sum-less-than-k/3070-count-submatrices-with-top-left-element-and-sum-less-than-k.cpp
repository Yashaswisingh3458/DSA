class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        int c = 0;

        vector<int> col(m, 0);

        for(int q = 0; q < n; q++) {
            for(int j = 0; j < m; j++) {
                col[j] += grid[q][j];
            }
            int s = 0;
            for(int i = 0; i < m; i++) {
                s += col[i];
                if(s <= k) c++;
            }
        }

        return c;
    }
};