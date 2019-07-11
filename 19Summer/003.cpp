class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> myset;
        int ans = 0, left = 0, right = 0;
        while(right < s.size()){
            if(myset.find(s[right]) == myset.end()){
                myset.insert(s[right++]);
                ans = max(ans, right - left);
            }else{
                myset.erase(s[left++]);
            }
        }
        
        return ans;
    }
};