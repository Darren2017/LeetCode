class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        int xx = abs(x);
        while(xx){
            ans = (ans * 10) + xx % 10;
            xx /= 10;
        }
        if(ans <= -pow(2, 31) || ans >= pow(2, 31) - 1){
            return 0;
        }
        if(x < 0){
            ans = -ans;
        }
        return ans;
    }
};