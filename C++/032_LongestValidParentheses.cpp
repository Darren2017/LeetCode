class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> S;
        int start = 0, len = s.size(), ans = 0;
        for(int i = 0; i < len; i++){
            if(s[i] == '('){
                S.push(i);
            }else{
                if(S.empty()){
                    start = i + 1;
                }else{
                    S.pop();
                    ans = S.empty() ? max(ans, i - start + 1) : max(ans, i - S.top());
                }
            }
        }
        return ans;
    }
};