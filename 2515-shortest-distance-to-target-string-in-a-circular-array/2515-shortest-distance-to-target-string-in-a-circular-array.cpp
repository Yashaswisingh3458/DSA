class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex)
    {
        int ans = INT_MAX;
        int n = words.size();

        for(int i = 0; i <= startIndex; i++){
            if(words[i] == target){
                int diff = startIndex - i;
                ans = min(ans, min(diff, n - diff));
            }
        }

        for(int i = startIndex; i < words.size(); i++){
            if(words[i] == target){
                int diff = i - startIndex;
                ans = min(ans, min(diff, n - diff));
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};