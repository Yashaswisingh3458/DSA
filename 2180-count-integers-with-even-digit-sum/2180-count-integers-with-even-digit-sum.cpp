class Solution {
public:
    int countEven(int num) {
        int c=0;
        for(int i =1;i<=num;i++){
            int s =0;
            int temp =i;
            while(temp!=0){
                s+=temp%10;
                temp=temp/10;
            }
            if(s%2==0){
                c+=1;
            }
        }
        return c;
    }
};