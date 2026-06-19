class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>s(gain.size()+1);
        s[0]=0;
        for(int i =0;i<gain.size();i++){
            s[i+1]=s[i]+gain[i];
        }
        int y= *max_element(s.begin(),s.end());
        return y;
    }
};