class Solution {
public:
    long long power(long long a, int k, long long limit) {
        long long res = 1;

        for (int i = 0; i < k; i++) {
            if (res > limit / a) return limit + 1; // overflow or exceeds limit
            res *= a;
        }

        return res;
    }

    long long floorKthRoot(long long n, int k) {
        long long lo = 1, hi = n, ans = 0;

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;

            if (power(mid, k, n) <= n) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return ans;
    }

    int countKthRoots(int l, int r, int k) {
        long long right = floorKthRoot(r, k);

        long long left = floorKthRoot((long long)l - 1, k);
        if(l==0){
            right+=1;
        }
        return (int)(right - left);
    }
};