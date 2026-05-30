class Solution {
public:
    bool validPalindrome(string s) {
        int i =0;
        int l = s.size()-1;
        bool q=true;
        int c=0;
        while(i<l){
            if(s[i]!=s[l]){
                if(i<l-1 && s[i]==s[l-1] && q){
                    l-=1;
                    q=false;
                    int temp = i;
                    int t = l;
                    while(temp<t){
                        if(s[temp]!=s[t]){
                            break;
                        }
                        temp+=1;
                        t-=1;
                    }
                    if(temp>=t){
                        return true;
                    }
                    else{
                        int temp = i + 1;
                        int t = l + 1;
                        while(temp < t){
                            if(s[temp] != s[t]){
                            break;
                            }
                            temp++;
                            t--;
                        }
                        return temp >= t;
                    }
                }
                else if(i+1<l && s[i+1]==s[l] && q){
                    i+=1;
                    q=false;
                    int temp = i;
                    int t = l;
                    while(temp<t){
                        if(s[temp]!=s[t]){
                            break;
                        }
                        temp+=1;
                        t-=1;
                    }
                    if(temp>=t){
    return true;
}
else{
    int temp = i + 1;
    int t = l + 1;

    while(temp < t){
        if(s[temp] != s[t]){
            break;
        }
        temp++;
        t--;
    }

    return temp >= t;
}
                }
                else if(i+1>=l){
                    break;
                }
                else{
                    return false;
                }
                if(c==1){
                    i+=1;
                    l+=1;
                }
            }
            i+=1;
            l-=1;
        }
        return true;
    }
};