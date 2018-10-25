class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size(), cnt = 0;
        string ans = "";
        for(int i = len - 1; i >= 0; i--){
            if(s[i] == ' ' && ans == ""){
                continue;
            }else if(s[i] == ' ' && ans != ""){
                return cnt;
            }else{
                ans += s[i];
                cnt++;
            }
        }
        return cnt;
    }
};

/*
    倒着找。
*/