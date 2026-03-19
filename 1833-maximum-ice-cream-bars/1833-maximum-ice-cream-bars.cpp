class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int s=0;
        for(int i =0;i<costs.size();i++){
            if(coins>=costs[i]){
                s+=1;
                coins -= costs[i];
            }
            else{
                break;
            }
        }
        return s;
    }
};