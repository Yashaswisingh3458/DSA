class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        unordered_map<char,int>ys;
        int y=0;
        for(char i ='a';i<='z';i++){
            ys[i]=widths[y];
            y+=1;
        }
        int c=0;
        int ans=0;
        for(int i =0;i<s.size();i++){
            if(ans+ys[s[i]]>100){
                ans = ys[s[i]];
                c+=1;
            }
            else{
                ans+=ys[s[i]];
            }
        }
        vector<int>q(2);
        q[0]=c+1;
        q[1]=ans;
        return q;
    }
};