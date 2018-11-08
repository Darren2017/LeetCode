class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n == 0){
            return 0;
        }
        int m = grid[0].size();
        if(m == 0){
            return 0;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i == 0 && j == 0){
                    continue;
                }
                int a = j - 1 >= 0 ? grid[i][j - 1] : 11111110;
                int b = i - 1 >= 0 ? grid[i - 1][j] : 11111110;
                grid[i][j] += min(a, b);
            }
        }
        return grid[n - 1][m - 1];
    }
};

/*
    感觉和上一道题区别不是很大，主要思路都是一样的。
*/