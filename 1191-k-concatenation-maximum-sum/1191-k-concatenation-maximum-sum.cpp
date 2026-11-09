class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        long long s = 0, y = 0, sum = 0;

        for(int x : arr) sum += x;

        int times = (k == 1) ? 1 : 2;

        for(int i = 0; i < arr.size() * times; i++) {
            y += arr[i % arr.size()];
            s = max(s, y);
            if(y < 0) y = 0;
        }

        if(k > 2 && sum > 0)
            s += (k - 2) * sum;

        return s % 1000000007;
    }
};