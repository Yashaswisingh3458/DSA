class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;
        for(int i =0;i<landStartTime.size();i++){
            int temp = landStartTime[i] + landDuration[i];
            for(int s=0;s<waterStartTime.size();s++){
                if(waterStartTime[s]>=temp){
                    temp = waterStartTime[s]+waterDuration[s];
                }
                else{
                    temp = temp+waterDuration[s];
                }
                ans = min(ans,temp);
                temp = landStartTime[i] + landDuration[i];
            }
        }
        for(int i =0;i<waterStartTime.size();i++){
            int temp = waterStartTime[i] + waterDuration[i];
            for(int s=0;s<landStartTime.size();s++){
                if(landStartTime[s]>=temp){
                    temp = landStartTime[s]+landDuration[s];
                }
                else{
                    temp = temp + landDuration[s];
                }
                ans = min(ans,temp);
                temp = waterStartTime[i] + waterDuration[i];
            }
        }
        return ans;
    }
};