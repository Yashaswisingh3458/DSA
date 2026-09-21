class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int s = 0;
        for(int i =0;i<skill.size();i++){
            s+=skill[i];
        }
        s = s/(skill.size()/2);
        unordered_map<int,int>ys;
        for(int i =0;i<skill.size();i++){
            ys[skill[i]]+=1;
        }
        long long y = 0;
        for(int i =0;i<skill.size();i++){
            if(ys[skill[i]]!=0){
                if(ys[s-skill[i]]!=0){
                    y = y + (skill[i]*(s-skill[i]));
                    ys[skill[i]]-=1;
                    ys[s-skill[i]]-=1;
                }
                else{
                    return -1;
                }
            }
        }
        return y;
    }
};