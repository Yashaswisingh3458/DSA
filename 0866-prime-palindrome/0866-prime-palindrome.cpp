class Solution {
public:

    int isPrime(int y){
        for(int i =2;i*i<=y;i++){
            if(y%i==0){
                return false;
            }
        }
        return true;
    }

    int primePalindrome(int n) {
        int i=0;
        while(true){
            if (10000000 <= n + i && n + i < 100000000) {
                i = 100000000 - n;
            }
            int s = n+i;
            int temp = 0;
            while(s!=0){
                temp = temp*10 + s%10;
                s=s/10;
            }
            if(temp==n+i && isPrime(temp) && temp>1){
                return temp;
            }
            i+=1;
        }
        return -1;
    }
};