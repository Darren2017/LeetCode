class Solution {
public:
    int strStr(string haystack, string needle) {
        int hlen = haystack.size(), nlen = needle.size();
        if(nlen == 0){
            return 0;
        }
        if(nlen > hlen){
            return -1;
        }
        hlen -= (nlen - 1);
        for(int i = 0; i < hlen; i++){
            bool flag = true;
            for(int j = 0; j < nlen; j++){
                if(haystack[j + i] == needle[j]){
                    continue;
                }else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                return i;
            }
        }
        return -1;
    }
};

/*
    求子串的位置，注意两个边界。
*/