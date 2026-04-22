class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ys;
        for(int i =0;i<queries.size();i++){
            for(int s=0;s<dictionary.size();s++){
                int c=0;
                for(int q=0;q<queries[i].size();q++){
                    if(queries[i][q]!=dictionary[s][q]){
                        c+=1;
                    }
                    if(c>2){
                        break;
                    }
                }
                if(c<=2){
                    ys.push_back(queries[i]);
                    break;
                }
            }
        }
        return ys;
    }
};