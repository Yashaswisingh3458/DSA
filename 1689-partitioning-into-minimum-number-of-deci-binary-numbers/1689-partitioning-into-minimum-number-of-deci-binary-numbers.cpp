class Solution {
public:
    int minPartitions(string n) {
        int y=0;
        for(int i =0;i<n.size();i++){
            int s= n[i] - '0';
            y=max(s,y);
        }
        return y;
    }
};