class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        if(n == 0){
            return 0;
        }
        int m = obstacleGrid[0].size();
        if(m == 0){
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
                if(obstacleGrid[i][j] == 0){
                    int a = j - 1 >= 0 ? dp[i][j - 1] : 0;
                    int b = i - 1 >= 0 ? dp[i - 1][j] : 0;
                    dp[i][j] += a + b;
                }else{
                    dp[i][j] = 0;
                }
            }
        }
        return dp[n - 1][m - 1];
    }
};

/*
    和62基本相同，只是处理下障碍的情况
*/