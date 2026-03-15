class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>s(heights.begin(),heights.end());
        sort(s.begin(),s.end());
        int y=0;
        for(int i =0;i<heights.size();i++){
            if(heights[i]!=s[i]){
                y+=1;
            }
        }
        return y;
    }
};