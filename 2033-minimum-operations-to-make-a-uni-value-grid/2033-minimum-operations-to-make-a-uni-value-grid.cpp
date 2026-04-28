class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>s;
        for(int i =0;i<grid.size();i++){
            for(int y=0;y<grid[0].size();y++){
                s.push_back(grid[i][y]);
            }
        }
        sort(s.begin(),s.end());
        int y = s.size();
        int temp=s[y/2];
        for(int i =0;i<y;i++){
            if(abs(s[i]-temp) %x != 0){
                return -1;
            }
        }
        int ys =0;
        for(int i =0;i<y;i++){
            ys += (abs(s[i]-temp))/x;
        }
        return ys;
    }
};