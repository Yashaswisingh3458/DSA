class Solution {
public:
    int dist(int a,int b){
        return min(abs(a-b),10-abs(a-b));
    }
    int minRotations(int n, string s) {
        int y = dist(0,s[0]-'0');
        for(int i =1;i<n;i++){
            y += dist(s[i-1]-'0',s[i]-'0');
        }
        int ys = y;
        ys = min(ys,y-dist(0,s[0]-'0')+dist(s[n-1]-'0',0));
        for(int i =1;i<n;i++){
            int temp = y-dist(s[i-1]-'0',s[i]-'0')+dist(s[i-1]-'0',s[n-1]-'0');
            ys = min(ys,temp);
        }
        return ys;
    }
};