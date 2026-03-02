class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ans =0;
        int i =0;
        int temp =0;

        while(i<seats.size()){
            int c =0;

            while(i<seats.size() && seats[i]!=1){
                c+=1;
                i+=1;
            }

            if(i==seats.size()){
                ans = max(c,ans); 
            }
            else if(seats[i]==1){
                if(temp == 0){
                    ans = max(ans,c);
                }
                else {
                    ans = max(ans,(c+1)/2);
                }
                temp =1;
            }

            i+=1;
        }

        return ans;
    }
};