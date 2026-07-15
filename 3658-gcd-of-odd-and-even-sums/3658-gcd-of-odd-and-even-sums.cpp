class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        n=n*2;
        int s=0;
        int y=0;
        int i =1;
        while(n>0){
            n-=1;
            if(i%2==0){
                s+=i;
            }
            else{
                y+=i;
            }
            i+=1;
        }
        int ans =1;
        for(int q=1;q<=min(s,y);q++){
            if(s%q==0 && y%q==0){
                ans = q;
            }
        }
        return ans;
    }
};