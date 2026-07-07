class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int>y;
        unordered_map<int,int>s;
        for(int i =0;i<mapping.size();i++){
            s[i]=mapping[i];
        }
        vector<pair<int,int>> sy;
        for(int i =0;i<nums.size();i++){
            int temp = nums[i];
            int ys =0;
            int q=0;
            if(temp == 0){
                ys = mapping[0];
            }
            while(temp!=0){
                ys =(s[temp%10]*pow(10,q))+ys;
                q+=1;
                temp=temp/10;
            }
            sy.push_back({ys, nums[i]});
        }
        stable_sort(sy.begin(), sy.end(), [](const auto &a, const auto &b){
            return a.first < b.first;
        });
        vector<int> ans;
        for(auto &p : sy){
            ans.push_back(p.second);
        }
        return ans;
    }
};