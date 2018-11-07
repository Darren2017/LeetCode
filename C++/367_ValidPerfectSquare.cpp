class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1, r = num;
        while(l < r){
            int mid = (l + r) / 2, mul = mid * mid;
            if(mul == num){
                return true;
            }else if(mul > num){
                r = mid;
            }else{
                l = mid;
            }
        }
        return false;
    }
};

/*
    似乎也不是动态规划啊！而且二分居然会超时，恐怖！！
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i = 1; num > 0;i += 2){
            num -= i;  
        }
        return num == 0;
    }
};

/*
    体会下
*/