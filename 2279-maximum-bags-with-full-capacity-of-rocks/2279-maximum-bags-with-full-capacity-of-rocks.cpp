class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>empty(capacity.size());
        for(int i =0;i<capacity.size();i++){
            empty[i]=capacity[i]-rocks[i];
        }
        sort(empty.begin(),empty.end());
        int i=0;
        int y=0;
        while(i<empty.size() && additionalRocks>0){
            if(empty[i]>0){
                int temp = min(empty[i],additionalRocks);
                empty[i] -= temp;
                additionalRocks -= temp;
            }
            i+=1;
        }
        for(int i=0;i<empty.size();i++){
            if(empty[i]==0){
                y+=1;
            }
        }
        return y;
        
    }
};