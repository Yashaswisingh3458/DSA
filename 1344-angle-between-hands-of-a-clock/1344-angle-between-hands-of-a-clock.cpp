class Solution {
public:
    double angleClock(int hour, int minutes) {
        // 1 min = 6 degree(360/60);
        // 1 hr = 30 degree(360/12);
        // 1 min changes it by 0.5 degree;
        if(hour == 12){
            hour = 0;
        }
        double q = (hour*30) + ((double)minutes/2);
        double s = minutes*6;
        double diff = abs(s-q);
        double ans = min(360-diff,diff);
        return ans;
    }
};