class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0;i<9;i++){
            unordered_map<int,char>y;
            for(int s=0;s<9;s++){
                if(y[board[i][s]]>0 && board[i][s]!='.'){
                    return false;
                }
                y[board[i][s]]+=1;
            }
        }
        for(int i =0;i<9;i++){
            unordered_map<int,char>y;
            for(int s=0;s<9;s++){
                if(y[board[s][i]]>0 && board[s][i]!='.'){
                    return false;
                }
                y[board[s][i]]+=1;
            }
        }
        for(int i =0;i<9;i+=3){
            for(int t=0;t<9;t+=3){
                unordered_map<int,char>y;
                for(int q = i;q<i+3;q+=1){
                    for(int w = t;w<t+3;w++){
                        if(y[board[q][w]]>0 && board[q][w]!='.'){
                            return false;
                        }
                        y[board[q][w]] += 1;
                    }
                }
            }
        }
        return true;
    }
};