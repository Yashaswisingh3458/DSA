class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int c=0;
        int ans = 0;
        for(int i =cost.size()-1;i>=0;i--){
            c+=1;
            if(c%3!=0){
                ans += cost[i];
            }
        }
        return ans;
    }
};