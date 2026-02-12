class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(int i =0;i<paragraph.size();i++){
            paragraph[i] = tolower(paragraph[i]);
        }
        unordered_map<string,int>s;
        vector<string>ys;
        for(int i =0;i<banned.size();i++){
            s[banned[i]]+=1;
        }
        unordered_map<string,int>y;
        for(int i =0;i<paragraph.size();i++){
            string q="";
            while(i < paragraph.size() &&
      paragraph[i] != ' ' &&
      paragraph[i] != '.' &&
      paragraph[i] != ',' &&
      paragraph[i] != ';' &&
      paragraph[i] != '!' &&
      paragraph[i] != '?' &&
      paragraph[i] != '\'')
{
                if(paragraph[i]==';' || paragraph[i]==',' || paragraph[i]=='!' || paragraph[i]=='?' || paragraph[i]=='.' || paragraph[i] == '\''
){
                    i+=1;
                    continue;
                }
                else{
                    q +=paragraph[i];
                }
                i+=1;
            }
            if(q.size() > 0){
                y[q] += 1;
                ys.push_back(q);
            }
        }
        string ans="";
        y[ans]=0;
        for(int i =0;i<ys.size();i++){
            if(y[ys[i]] > y[ans] && s[ys[i]]<1){
                ans=ys[i];
            }
        }
        return ans;
    }
};