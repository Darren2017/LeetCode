class Solution {
public:
    string addBinary(string a, string b) {
        char c = '0';
        string ans = "";
        int alen = a.size() - 1, blen = b.size() - 1;
        while(alen >= 0 && blen >= 0){
            int tem = a[alen] - '0' + b[blen] - '0' + c - '0';
            switch(tem){
                case 0:{
                    ans += '0';
                    c = '0';
                    break;
                }
                case 1:{
                    ans += '1';
                    c = '0';
                    break;
                }
                case 2:{
                    ans += '0';
                    c = '1';
                    break;
                }
                case 3:{
                    ans += '1';
                    c = '1';
                    break;
                }
            }
            alen--, blen--;
        }
        while(alen >= 0){
            int tem = a[alen] - '0' + c - '0';
            switch(tem){
                case 0:{
                    ans += '0';
                    c = '0';
                    break;
                }
                case 1:{
                    ans += '1';
                    c = '0';
                    break;
                }
                case 2:{
                    ans += '0';
                    c = '1';
                    break;
                }
            }
            alen--;
        }
        while(blen >= 0){
            int tem = b[blen] - '0' + c - '0';
            switch(tem){
                case 0:{
                    ans += '0';
                    c = '0';
                    break;
                }
                case 1:{
                    ans += '1';
                    c = '0';
                    break;
                }
                case 2:{
                    ans += '0';
                    c = '1';
                    break;
                }
            }
            blen--;
        }
        if(c == '1'){
            ans += '1';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};