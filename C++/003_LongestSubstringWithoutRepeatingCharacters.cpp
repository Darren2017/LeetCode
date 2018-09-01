class Solution {
public:
    string re;

    int lengthOfLongestSubstring(string s) {
        int len = s.length(), l = 0, r = 0, sum = 0;
        for(int i = 0; i < len; i++){
            re = s.substr(l, i + 1 - l);
            if(check()){
                if(sum < i + 1 - l){
                    sum = i + 1 - l;
                }
            }else{
                r = i;
                for(; check() == false; l++){
                    re = s.substr(l, r - l + 1);
                }
                l--;
                if(sum < r - l + 1){
                    sum = r - l + 1;
                }
            }
        }
        return sum;
    }

    bool check(){
        int allstr[300] = {0}, clen = re.length();
        for(int i = 0; i < clen; i++){
            allstr[re[i]] += 1;
            if(allstr[re[i]] > 1){
                return false;
            }
        }
        return true;
    }
};

/*
    此解法用了尺取法，但是感觉有更简单的解法，注意问题是18行的j--，不要丢了。
*/