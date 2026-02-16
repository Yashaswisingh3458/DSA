class Solution {
public:
    uint32_t reverseBits(uint32_t n) {   // change type
        stack<int> st;

        // Always take 32 bits
        for(int i = 0; i < 32; i++){
            st.push(n % 2);
            n = n / 2;
        }

        vector<int> s;
        while(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }

        uint32_t ys = 0;

        for(int i = 0; i < 32; i++){
            if(s[i] == 1){
                ys += (1u << i);
            }
        }

        return ys;
    }
};