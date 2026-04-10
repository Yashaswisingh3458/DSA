class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,int>s;
        for(int i =0;i<banned.size();i++){
            s[banned[i]]+=1;
        }
        int sum = 0;
        int y=0;
        for(int i =1;i<=n;i++){
            if(s[i]==0 && sum+i<=maxSum){
                y+=1;
                sum+=i;
            }
        }
        return y;
    }
};