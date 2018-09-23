class Solution {
public:
    string convert(string s, int numRows) {
        string news = "";
        int len = s.length(), p;
        if(len <= numRows || numRows == 1){
            return s;
        }
        for(int i = 0; i < numRows; i++){
            p = i;
            while(p < len){
                news += s[p];
                if(i != 0 && i != numRows - 1 && p + numRows * 2 - 2 - i * 2 < len){
                    news += s[p + numRows * 2 - 2 - i * 2];
                }
                p += numRows * 2 - 2;
            }
        }
        return news;
    }
};