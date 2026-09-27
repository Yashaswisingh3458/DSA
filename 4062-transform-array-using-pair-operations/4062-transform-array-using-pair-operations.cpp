class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long s=0;
        for(int i =0;i<source.size();i++){
            s+=source[i];
            s-=target[i];
        }
        if(s==0){
            return true;
        }
        return false;
    }
};