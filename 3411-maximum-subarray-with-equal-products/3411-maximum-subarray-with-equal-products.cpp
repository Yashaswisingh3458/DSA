class Solution {
public:
    int maxLength(vector<int>& nums) {
    int ys = 0;
    for (int i = 0; i < (int)nums.size(); i++) {
        for (int s = i; s < (int)nums.size(); s++) {
            long long y = 1;
            int t = *min_element(nums.begin() + i, nums.begin() + s + 1);
            bool too_big = false;

            for (int q = i; q <= s; q++) {
                y = y * nums[q];
                if (y > 2520LL * t) {
                    too_big = true;
                    break;
                }
            }
            if (too_big) break;

            for (int sy = t; sy >= 1; sy--) {
                bool ok = true;
                for (int q = i; q <= s; q++) {
                    if (nums[q] % sy != 0) {
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    t = sy;
                    break;
                }
            }

            long long ans = std::accumulate(
                nums.begin() + i,
                nums.begin() + s + 1,
                1LL,
                [](long long acc, int x) {
                    return std::lcm(acc, static_cast<long long>(x));
                }
            );

            if (y == (ans * t)) {
                ys = max(ys, s - i + 1);
            }
        }
    }
    return ys;
}
};