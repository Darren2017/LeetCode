class Solution {
public:
    int ans(char a, char b){
        return a + b - '0' - '0';
    }
    int numDecodings(string s) {
        int cnt1 = 1, cnt2 = 1, len = s.size() - 1;
        for(int i = 0; i < len; i++){
            if(ans(s[i], s[i - 1]) < 27){
                cnt *= 2;
            }
        }
        return cnt;
    }
};