class Solution {
public:
    string toHex(int num) {

        if(num == 0) return "0";

        unsigned int n = num;

        string s="";
        string b="";

        while(n!=0){
            b = to_string(n%2) + b;
            n /= 2;
        }

        while(b.size()%4 != 0){
            b = '0'+b;
        }

        for(int i = 0;i<b.size()-3;i+=4){

            int val=0;
            int q = 3;

            for(int t=i;t<i+4;t++){
                if(b[t]=='1'){
                    val += (1<<q);
                }
                q--;
            }

            if(val==10) s += 'a';
            else if(val==11) s += 'b';
            else if(val==12) s += 'c';
            else if(val==13) s += 'd';
            else if(val==14) s += 'e';
            else if(val==15) s += 'f';
            else s += to_string(val);
        }

        return s;
    }
};