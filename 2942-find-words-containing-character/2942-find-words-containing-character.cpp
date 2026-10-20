class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ys;
        for(int i =0;i<words.size();i++){
            for(int s=0;s<words[i].size();s++){
                if(words[i][s]==x){
                    ys.push_back(i);
                    break;
                }
            }
        }
        return ys;
    }
};