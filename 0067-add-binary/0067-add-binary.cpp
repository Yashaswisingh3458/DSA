class Solution {
public:
    string addBinary(string a, string b) {
        int y=a.size();
        int s=b.size();
        string aa="";
        if(y>s){
            int temp = y-s;
            while(temp!=0){
                aa += "0";
                temp-=1;
            }
            b = aa + b;
        }
        else if(s>y){
            int temp = s-y;
            while(temp !=0){
                aa +="0";
                temp -=1;
            }
            a = aa+a;
        }
        string rv="";
        int carry =0;
        for(int i =a.size()-1;i>=0;i--){
            if(a[i] == '0' && b[i] == '0'){
                if(carry ==0){
                    rv = "0"+rv;
                }
                else if(carry == 1){
                    rv = "1"+rv;
                    carry = 0;
                }
            }
            else if((a[i]=='1' && b[i]=='0') || (a[i]=='0' && b[i]=='1')){
                if(carry ==0){
                    rv = "1"+rv;
                }
                else if(carry == 1){
                    rv = "0"+rv;
                    carry = 1;
                }
            }
            else if(a[i]=='1' && b[i]=='1'){
                if(carry ==0){
                    rv = "0"+rv;
                    carry =1;
                }
                else if(carry == 1){
                    rv = "1"+rv;
                    carry = 1;
                }
            }
        }
        if(carry == 1){
            rv = "1" + rv;
        }
        return rv;
    }
};