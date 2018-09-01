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

/*
    去偷瞄了学姐的解法，发现我好智障，这个题根本就不适合用尺取法，尺取法适合于求某种条件下的最短子串，这个是求最长子串。
    明显我们发现一段子串不满足条件后这段子串的全部内容就已经不适合继续使用了，在尺取法作用于该子串的情况下，子串的长度只能是越来越短，
    所以直接舍弃该子串，从断点处重新可是寻找最长子串。
*/