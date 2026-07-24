class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        vector<int> a(st.begin(), st.end());

        vector<int> vis(2048, 0);

        for (int x : a)
            for (int y : a)
                vis[x ^ y] = 1;

        vector<int> ans(2048, 0);

        for (int xy = 0; xy < 2048; xy++) {
            if (!vis[xy]) continue;
            for (int z : a)
                ans[xy ^ z] = 1;
        }

        return accumulate(ans.begin(), ans.end(), 0);
    }
};