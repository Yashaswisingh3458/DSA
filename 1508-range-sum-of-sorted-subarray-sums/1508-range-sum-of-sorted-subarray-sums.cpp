class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long>s;
        int MOD = pow(10,9)+7;
        for(int i =0;i<n;i++){
            vector<int>temp;
            for(int y=i;y<n;y++){
                temp.push_back(nums[y]);
                int sum=0;
                for(int y=0;y<temp.size();y++){
                    sum+=temp[y];
                }
                s.push_back(sum);
            }
        }
        sort(s.begin(),s.end());
        long long ys=0;
        for(int i=left-1;i<right;i++){
            ys+=s[i];
        }
        ys=ys%MOD;
        return (int)ys;
    }
};