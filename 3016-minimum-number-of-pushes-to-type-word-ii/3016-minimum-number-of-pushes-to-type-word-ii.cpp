class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>s;
        for(int i =0;i<word.size();i++){
            s[word[i]]+=1;
        }
        vector<pair<char,int>>y;
        for(int i =0;i<word.size();i++){
            if(s[word[i]]!=0){
                y.push_back({word[i],s[word[i]]});
                s[word[i]]=0;
            }
        }
        sort(y.begin(), y.end(), [](pair<int,int> a, pair<int,int> b) {
            return a.second > b.second;
        });
        int  ys= 0;
        for(int i =0;i<y.size();i++){
            if(i<8){
                ys += y[i].second;
            }
            else if(i>=8 && i<16){
                ys += y[i].second*2;
            }
            else if(i>=16 && i<24){
                ys += y[i].second*3;
            }
            else{
                ys += y[i].second*4;
            }
        }
        return ys;
    }
};