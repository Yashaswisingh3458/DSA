class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        vector<int> s;
        int n = grid.size();
        for(int i = 0; i < n; i++){
            int c = 0;
            for(int y = grid[i].size()-1; y >= 0; y--){
                if(grid[i][y] == 0){
                    c += 1;
                }
                else{
                    break;
                }
            }
            s.push_back(c);
        }
        int c = 0;
        for(int i = 0; i < n; i++){
            int required = n - 1 - i;
            int ys = i;
            while(ys < n && s[ys] < required){
                ys++;
            }

            if(ys == n) return -1;
            while(ys > i){
                swap(s[ys], s[ys-1]);
                c++;
                ys--;
            }
        }

        return c;
    }
};