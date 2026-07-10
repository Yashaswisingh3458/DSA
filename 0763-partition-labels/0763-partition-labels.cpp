class Solution {
public:
    vector<int> partitionLabels(string s) {
        int i =0;
        int n = s.size();
        unordered_map<char,int>y;
        for(int i =0;i<s.size();i++){
            y[s[i]]=i;
        }
        vector<int>ys;
        while(i<n){
            int temp = y[s[i]];
            for(int q=i;q<=temp;q++){
                temp = max(temp,y[s[q]]);
            }
            ys.push_back(temp-i+1);
            i=temp+1;
        }
        return ys;
    }
};