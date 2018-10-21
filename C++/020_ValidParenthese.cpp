class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        int len = s.size();
        if(s.size() % 2){
            return false;
        }
        for(int i = 0; i < len; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                S.push(s[i]);
            }else if(S.empty()){
                return false;
            }else if(s[i] == ')' && S.top() != '('){
                return false;
            }else if(s[i] == ']' && S.top() != '['){
                return false;
            }else if(s[i] == '}' && S.top() != '{'){
                return false;
            }else{
                S.pop();
            }
        }
        if(S.empty()){
            return true;
        }else{
            return false;
        }
    }
};

/*
    使用栈，是先判断后入栈而不是全部入栈之后再出栈做判断，一开始傻了！！
    而且似乎测评机心情贼好，居然0ms通过。
*/