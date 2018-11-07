class Solution {
public:
    int count = 0;
    void climbStairs_(int n) {
        if(n == 0){
            count++;
        }
        if(n > 1){
            climbStairs(n - 2);
        }
        if(n > 0){
            climbStairs(n - 1);
        }
    }
    int climbStairs(int n){
        climbStairs_(n);
        return count;
    }
};

/*
    Time Limit Exceeded
*/

class Solution {
public:
    int climbStairs(int n) {
        int ways[] = {1, 1};
        for(int i = 1; i < n; i++){
            int tem = ways[1];
            ways[1] += ways[0];
            ways[0] = tem;
        }
        return ways[1];
    }
};

/*
阶数   方法
0       1
1       1
2      1+1=2
3      1+2=3
4      2+3=5
5      3+5=8
所以第n阶只与第n-1和n-2阶有关
*/