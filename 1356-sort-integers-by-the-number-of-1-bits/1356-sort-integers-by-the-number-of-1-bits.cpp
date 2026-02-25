class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        vector<pair<int,int>> y;

        for(int i = 0; i < arr.size(); i++){
            int temp = arr[i];
            int c = 0;

            while(temp != 0){
                if(temp % 2 == 1)
                    c++;
                temp /= 2;
            }

            y.push_back({arr[i], c});
        }

        sort(y.begin(), y.end(), [](auto &a, auto &b) {
            if(a.second == b.second)
                return a.first < b.first;
            return a.second < b.second;
        });

        vector<int> ys;
        for(auto &p : y)
            ys.push_back(p.first);

        return ys;
    }
};