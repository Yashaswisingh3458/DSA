class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>s;
        for(int i =0;i<text.size();i++){
            s[text[i]]+=1;
        }
        int b=s['b'];
        int a= s['a'];
        int l = s['l']/2;
        int o=s['o']/2;
        int n= s['n'];
        int ans = min(min(min(min(b,a),l),o),n);
        return ans;
    }
};