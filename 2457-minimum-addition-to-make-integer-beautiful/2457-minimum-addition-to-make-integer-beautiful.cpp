class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        long long x = 0;
        int i = 1;
        while (true) {
            long long temp = n + x;
            int s = 0;
            while (temp != 0) {
                s += temp % 10;
                temp /= 10;
            }
            if (s <= target)
                return x;
            x = (long long)pow(10, i) - (n % (long long)pow(10, i));
            i++;
        }
        return x;
    }
};