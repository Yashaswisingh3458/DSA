class Solution {
public:
    int minRange(int a, int b, int c) {
        int s= min(a,min(b,c));
        int y= max(a,max(b,c));
        int t = a+b+c-y-s;
        return min(y-s,s+t-(min(s,t)));
    }
};
// s=2,y=9,t = 5