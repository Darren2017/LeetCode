class Solution {
public:
    bool isafe(char &a){
        if((a >= 'a' && a <= 'z')){
            a -= 'a' - 'A';
            return true;
        }
        if((a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        stack<char> S;
        queue<char> Q;
        int len = s.size();
        for(int i = 0; i < len; i++){
            if(isafe(s[i])){
                S.push(s[i]);
                Q.push(s[i]);
            }
        }
        len = S.size();
        char a, b;
        for(int i = 0; i < len; i++){
            a = S.top();
            b = Q.front();
            if(a != b){
                return false;
            }
            S.pop();
            Q.pop();
        }
        return true;
    }
};