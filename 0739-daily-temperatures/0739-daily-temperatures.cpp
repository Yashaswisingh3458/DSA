class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>y(temperatures.size());
        for(int i =0;i<temperatures.size();i++){
            for(int s=i+1;s<temperatures.size();s++){
                if(temperatures[s]>temperatures[i]){
                    y[i]=s-i;
                    break;
                }
            }
        }
        return y;
    }
};