class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() <= 1){
            return s;
        }else{
            int index = 0, len = s.size();
            string realans = "";
            for(int i = 0; i < len; i++){
                string ans = findsize(s, i, len);
                if(ans.size() > realans.size()){
                    realans = ans;
                }
            }
            return realans;
        }
    }
    string findsize(string s, int i, int len){
        int size = 1, j = 1, l = 0, size2 = 0;
        string ans1, ans2;
        while(i + j < len && i - j >= 0 && s[i + j] == s[i - j]){       //"aba"
            size += 2;
            j++;
        }
        j--;
        if(s[i + 1] == s[i]){
            while(i + l + 1 < len && i - l >= 0 && s[i + l + 1] == s[i - l]){       //"abba"
                size2 += 2;
                l++;
            }
        }
        l--;
        return (size > size2 ? s.substr(i - j, 2 * j + 1) : s.substr(i - l, 2 * l + 2));
    }
};

/*
O(n)的复杂度，从左往右遍历，以当前索义为定点，向两边扩展，寻找最长子串。注意字符串越界和最长子串长度为偶数的情况。
*/