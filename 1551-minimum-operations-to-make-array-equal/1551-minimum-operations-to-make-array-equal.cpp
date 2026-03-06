class Solution {
public:
    int minOperations(int n) {
        long long avg=0;
        for(int i =0;i<n;i++){
            avg = avg+ (2*i)+1;
        }
        avg = avg/n;
        long long s=0;
        int y=0;
        for(int i =0;i<n;i++){
            s=(i*2)+1;
            if(s<=avg){
                y+= avg-s;
            }
        }
        return y;
    }
};