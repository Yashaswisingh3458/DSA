class Solution {
public:
    int maxProduct(int n) {
        vector<int>s;
        while(n!=0){
            s.push_back(n%10);
            n=n/10;
        }
        sort(s.begin(),s.end());
        return s[s.size()-1]*s[s.size()-2];
    }
};