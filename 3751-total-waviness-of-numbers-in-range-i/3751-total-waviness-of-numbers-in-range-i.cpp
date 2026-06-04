class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int c=0;
        for(int i =num1;i<=num2;i++){
            if(i<100){
                continue;
            }
            string temp = to_string(i);
            for(int s=1;s<temp.size()-1;s++){
                if((temp[s]>temp[s-1] && temp[s]>temp[s+1])||(temp[s]<temp[s-1] && temp[s]<temp[s+1])){
                    c+=1;
                }
            }
        }
        return c;
    }
};