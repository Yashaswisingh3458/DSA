class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans = 0;
        for(int i =0;i<words.size();i++){
            unordered_map<char,int>y;
            for(int q = 0;q<words[i].size();q++){
                y[words[i][q]]+=1;
            }
            for(int q=i+1;q<words.size();q++){
                if((words[q].size()*words[i].size())<=ans){
                    continue;
                }
                int c =0;
                for(int s = 0;s<words[q].size();s++){
                    if(y[words[q][s]]>0){
                        c=1;
                        break;
                    }
                }
                if(c==0){
                    int temp = words[i].size()*words[q].size();
                    ans = max(temp,ans);
                }
            }
        }
        return ans;
    }
};