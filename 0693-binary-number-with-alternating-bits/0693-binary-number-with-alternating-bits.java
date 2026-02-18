class Solution {
    public boolean hasAlternatingBits(int n) {
        int s=n%2;
        n=n/2;
        while(n!=0){
            int i = n%2;
            n=n/2;
            if(i==s){
                return false;
            }
            s=i;
        }
        return true;
    }
}