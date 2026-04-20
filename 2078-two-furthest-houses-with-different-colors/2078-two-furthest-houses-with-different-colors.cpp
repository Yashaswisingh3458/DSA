class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans =0;
        int n = colors.size();
        for(int i =0;i<n;i++){
            for(int s=n-1;s>=0;s--){
                if(colors[i]!=colors[s]){
                    ans = max(ans,s-i);
                    break;
                }
            }
        }
        return ans;
    }
};