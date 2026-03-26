class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
    if(a[0] == b[0]) return a[1] > b[1];
    return a[0] < b[0];
});
        for(int i =0;i<intervals.size();i++){
            for(int s=0;s<intervals.size();s++){
                if(s!=i && intervals[i][0]<=intervals[s][0] && intervals[i][1]>=intervals[s][1]){
                    intervals.erase(intervals.begin()+s);
                    s-=1;
                }
            }
        }
        return intervals.size();
    }
};