class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size(), ans = 0, rans = INT_MIN;
        for(int i = 0; i < len; i++){
            if(ans < 0){
                ans = 0;
            }
            ans += nums[i];
            rans = max(ans, rans);
        }
        return rans;
    }
};

/*
    动态规划，前一部分如果小于0便抛弃，否则便保留,向前看不是向后看。
    还可以用分治，之后看了大佬的再加，自己还不会。
*/