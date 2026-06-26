class Solution {
public:
    string arrangeWords(string text) {
        transform(text.begin(), text.end(), text.begin(), ::tolower);
        vector<pair<int,string>>s;
        int i =0;
        while(i<text.size()){
            string y="";
            int c=0;
            while(i<text.size() && text[i]!=' '){
                y+=text[i];
                i+=1;
                c+=1;
            }
            i+=1;
            s.push_back({c,y});
        }
        stable_sort(s.begin(), s.end(),[](const auto &a, const auto &b) {
            return a.first < b.first;
        });
        string ys;
        for (int q = 0; q < s.size(); q++) {
            ys += s[q].second;
            if (q != s.size() - 1)
                ys += ' ';
        }
        ys[0] = toupper(ys[0]);
        return ys;
    }
};