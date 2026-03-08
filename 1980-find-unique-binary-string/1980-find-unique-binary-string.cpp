class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<string,int>s;
        int n=nums.size();
        for(int i =0;i<n;i++){
            s[nums[i]]+=1;
        }
        for(int i =0;i<pow(2,n);i++){
            int temp =i;
            string y="";
            while(temp!=0){
                string ys = to_string(temp%2);
                temp=temp/2;
                y+=ys;
            }
            while(y.size()<n){
                y = '0'+y;
            }
            if(s[y]==0){
                return y;
            }
        }
        return "";
    }
};