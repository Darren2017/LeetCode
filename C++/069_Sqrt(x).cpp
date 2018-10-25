class Solution {
public:
    int mySqrt(int x) {
        return (int)sqrt(x);
    }
};

/*
    智障的做法
*/

class Solution {
public:
    int mySqrt(int x) {
        if (x == 1 || x == 0) return x;
        int l = 0, r = x;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (x / mid >= mid){
                l = mid + 1;
            }
            else{
                r = mid;
            }
        }
        return r - 1;
    }
};

/*
    二分法，但是效率很低
*/


class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        double res = 1, pre = 0;
        while (abs(res - pre) > 1e-6) {
            pre = res;
            res = (res + x / res) / 2;
        }
        return int(res);
    }
};

/*
    牛顿迭代法，大一期末考试考过。
*/