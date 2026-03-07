class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t = s + s;

        int ans = INT_MAX;
        int c1 = 0, c2 = 0;
        int l = 0;

        for(int r = 0; r < 2*n; r++){

            if(t[r] != (r%2 ? '1' : '0')) c1++;
            if(t[r] != (r%2 ? '0' : '1')) c2++;

            if(r - l + 1 > n){
                if(t[l] != (l%2 ? '1' : '0')) c1--;
                if(t[l] != (l%2 ? '0' : '1')) c2--;
                l++;
            }

            if(r - l + 1 == n){
                ans = min(ans, min(c1,c2));
            }
        }

        return ans;
    }
};