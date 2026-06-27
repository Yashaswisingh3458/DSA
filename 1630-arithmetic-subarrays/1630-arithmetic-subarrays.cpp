class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r){
        vector<bool>s;
        for(int i =0;i<l.size();i++){
            vector<int>y;
            for(int q=l[i];q<=r[i];q++){
                y.push_back(nums[q]);
            }
            if(y.size()<2){
                s.push_back(false);
                continue;
            }
            sort(y.begin(),y.end());
            int ys= y[1]-y[0];
            int c=0;
            for(int q=1;q<y.size();q++){
                int temp = y[q]-y[q-1];
                if(ys!=temp){
                    c=1;
                    break;
                }
            }
            if(c==0){
                s.push_back(true);
            }
            else{
                s.push_back(false);
            }
        }
        return s;
    }
};