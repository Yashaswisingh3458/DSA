class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>s;
        if(x<=arr[0]){
            int i=0;
            while(k!=0){
                k-=1;
                s.push_back(arr[i]);
                i+=1;
            }
            return s;
        }
        else if(x>=arr[arr.size()-1]){
            int i=arr.size()-k;
            while(k!=0){
                k-=1;
                s.push_back(arr[i]);
                i+=1;
            }
            return s;
        }
        else{
            for(int i =0;i<arr.size();i++){
                if(arr[i]==x || (i< arr.size()-1 && x>arr[i] && x<arr[i+1])){
                    int temp, y;
                    if(abs(x-arr[i]) > abs(x-arr[i+1])){
                    s.push_back(arr[i+1]);
                    k--;
                    temp = i;
                    y = i+2;
                }
                else{
                    s.push_back(arr[i]);
                    k--;
                    temp = i-1;
                    y = i+1;
                }
                    while(k!=0){
                        if(temp>=0 && y<arr.size()){
                            if(abs(x-arr[temp])<=abs(x-arr[y])){
                                s.push_back(arr[temp]);
                                temp-=1;
                                k-=1;
                            }
                            else{
                                s.push_back(arr[y]);
                                y+=1;
                                k-=1;
                            }
                        }
                        else if(temp<0){
                            while(k!=0){
                                s.push_back(arr[y]);
                                y+=1;
                                k-=1;
                            }
                        }
                        else if(y>=arr.size()){
                            while(k!=0){
                                s.push_back(arr[temp]);
                                temp-=1;
                                k-=1;
                            }
                        }
                    }
                    break;
                }
            }
        }
        sort(s.begin(),s.end());
        return s;
    }
};