class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string>s;
        int a=0;
        int b=0;
        for(int i =0;i<rain.size()-1;i++){
            if(rain[i]==1 && rain[i+1]==1){
                if(a<=b){
                    s.push_back("Alice");
                    a+=1;
                }
                else{
                    s.push_back("Bob");
                    b+=1;
                }
            }
            else if(rain[i]==1){
                s.push_back("Bob");
                b+=1;
            }
            else{
                s.push_back("None");
            }
        }
        if(rain[rain.size()-1]==1){
            s.push_back("Bob");
        }
        else{
            s.push_back("None");
        }
        return s;
    }
};