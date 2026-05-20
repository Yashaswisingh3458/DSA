class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>s;
        vector<int>ans;
        for(int i =0;i<A.size();i++){
            s[A[i]]=1;
            int y=0;
            for(int temp =0;temp<=i;temp++){
                if(s[B[temp]]==1){
                    y+=1;
                }
            }
            ans.push_back(y);
        }
        return ans;
    }
};