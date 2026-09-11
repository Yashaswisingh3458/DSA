class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int>ys;
        for(int i =0;i<digits.size();i++){
            for(int s = 0;s< digits.size();s++){
                for(int y = 0;y<digits.size();y++){
                    if(s!=i && y!= s && y!= i && digits[y]%2==0 && digits[i]!=0){
                        int temp = digits[i]*100 + digits[s]*10 + digits[y];
                        ys.insert(temp);
                    }
                }
            }
        }
        return ys.size();
    }
};