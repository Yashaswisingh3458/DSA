class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        for(int y =0;y<k;y++){
            int temp = grid[n-1][m-1];
            for(int i =0;i<n;i++){
                for(int s=0;s<m;s++){
                    int y = grid[i][s];
                    grid[i][s]= temp;
                    temp = y;
                }
            }
        }
        return grid;
    }
};