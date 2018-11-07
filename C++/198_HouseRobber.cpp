class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len == 0){
            return 0;
        }
        int rob = nums[0], pass = 0;
        int currob = rob, curpass = pass;
        for(int i = 1; i < len; i++){
            currob = nums[i] + pass;
            curpass = max(pass, rob);
            rob = currob;
            pass = curpass;
        }
        return max(rob, pass);
    }
};

/*
    动态规划，有点感觉了，状态转移方程：rob[i] = nums[i] + pass[i-1]    pass[i] = max(rob[i-1], pass[i-1])
*/