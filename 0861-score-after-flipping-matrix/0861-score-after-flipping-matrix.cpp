class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0;i<n;i++){
            if(grid[i][0]==0){
                for(int s=0;s<m;s++){
                    if(grid[i][s]==0){
                        grid[i][s] = 1;
                    }
                    else{
                        grid[i][s] = 0;
                    }
                }
            }
        }
        for(int i = 0;i<m;i++){
            int z =0;
            int o = 0;
            for(int s = 0;s<n;s++){
                if(grid[s][i] == 0){
                    z+=1;
                }
                else{
                    o+=1;
                }
            }
            if(z>o){
                for(int s=0;s<n;s++){
                    if(grid[s][i] == 0){
                        grid[s][i] = 1;
                    }
                    else{
                        grid[s][i] = 0;
                    }
                }
            }
        }
        int sum = 0;
        for(int i =0;i<n;i++){
            int y = 0;
            for(int s=0;s<m;s++){
                y = y + (grid[i][s])*(pow(2,m-s-1));
            }
            sum += y;
        }
        return sum;
    }
};