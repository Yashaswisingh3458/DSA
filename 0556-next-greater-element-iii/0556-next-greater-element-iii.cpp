class Solution {
public:
    int nextGreaterElement(int n) {
        string y = to_string(n);

        int idx = -1;
        for(int i = y.size() - 2; i >= 0; i--) {
            if(y[i] < y[i + 1]) {
                idx = i;
                break;
            }
        }

        if(idx == -1) return -1;
        int ts = -1;
        for(int i = y.size() - 1; i > idx; i--) {
            if(y[i] > y[idx]) {
                ts = i;
                break;
            }
        }
        swap(y[idx], y[ts]);
        reverse(y.begin() + idx + 1, y.end());
        long long ans = stoll(y);
        return (ans > INT_MAX) ? -1 : (int)ans;
    }
};