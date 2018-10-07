class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        char a[34];
        int len = 0;
        while(x){
            a[len++] = x % 10;
            x /= 10;
        }
        for(int i = 0; i < len / 2; i++){
            if(a[i] != a[len - i - 1]){
                return false;
            }
        }
        return true;
    }
};