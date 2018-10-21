class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if(strs.size() == 0){
            return ans;
        }
        int slen = strs[0].size(), vlen = strs.size(), i, j;
        for(int i = 0; i < vlen; i++){
            if(slen > strs[i].size()){
                slen = strs[i].size();
            }
        }
        for(i = 0; i < slen; i++){
            for(j = 0; j < vlen - 1; j++){
                if(strs[j][i] != strs[j + 1][i]){
                    return ans;
                }
            }
            ans += strs[j][i];
        }
        return ans;
    }
};

/*
    .....似乎没啥技术含量，很简单的做的，不知道为啥效率还很高。
*/