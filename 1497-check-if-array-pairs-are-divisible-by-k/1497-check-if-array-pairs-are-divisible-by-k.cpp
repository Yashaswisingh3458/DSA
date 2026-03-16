class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> mp;

        for(int i=0;i<arr.size();i++){
            int r = ((arr[i] % k) + k) % k;
            mp[r]++;
        }

        for(auto it : mp){
            int r = it.first;

            if(r == 0){
                if(mp[r] % 2) return false;
            }
            else if(mp[r] != mp[k-r]){
                return false;
            }
        }

        return true;
    }
};