class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>s;
        int n = matrix.size();
        int m = matrix[0].size();
        int right = m-1;
        int left = 0;
        int top = 0;
        int bottom = n-1;
        while(right>=left && top<=bottom){
            for(int i =left;i<=right;i++){
                s.push_back(matrix[top][i]);
            }
            top+=1;
            for(int i =top;i<=bottom;i++){
                s.push_back(matrix[i][right]);
            }
            right-=1;
            if(top<=bottom){
                for(int i =right;i>=left;i--){
                    s.push_back(matrix[bottom][i]);
                }
                bottom-=1;
            }
            if(left<=right){
                for(int i = bottom;i>=top;i--){
                    s.push_back(matrix[i][left]);
                }
                left+=1;
            }
        }
        return s;
    }
};