class Solution {
public:
    int uniquePaths(int m, int n) {
        if(n == 0 || m == 0){
            return 0;
        }
        int dp[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                dp[i][j] = 0;
            }
        }
        dp[0][0] = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int a = j - 1 >= 0 ? dp[i][j - 1] : 0;
                int b = i - 1 >= 0 ? dp[i - 1][j] : 0;
                dp[i][j] += a + b;
            }
        }
        return dp[n - 1][m - 1];
    }
};

/*
    到达(m, n)点的路径数之和等于到达(m - 1, n) (m, n - 1)两点路径数之和。
*/