class Solution {
public:

    bool isPrime(int c){
        if(c==2){
            return true;
        }
        if(c<2){
            return false;
        }
        for(int i =2;i<=c/2;i++){
            if(c%i==0){
                return false;
            }
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int s=0;
        for(int i=left;i<=right;i++){
            int temp = i;
            int c=0;
            while(temp!=0){
                if(temp%2==1){
                    c+=1;
                }
                temp=temp/2;
            }
            if(isPrime(c)){
                s+=1;
            }
        }
        return s;
    }
};