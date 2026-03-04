class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans =0;
        for(int i =0;i<mat.size();i++){
            int c=0;
            int temp =0;
            for(int s=0;s<mat[i].size();s++){
                if(mat[i][s]==1){
                    c+=1;
                    temp=s;
                }
                if(c>1){
                    break;
                }
            }
            if(c==1){
                int y=0;
                for(int s=0;s<mat.size();s++){
                    if(mat[s][temp]==1 && s!=i){
                        y=1;
                        break;
                    }
                }
                if(y==0){
                    ans+=1;
                }
            }
        }
        return ans;
    }
};