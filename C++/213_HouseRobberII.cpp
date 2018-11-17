class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len == 0){
            return 0;
        }
        int rob = nums[0], pass = 0;
        int currob = rob, curpass = pass;
        for(int i = 1; i < len - 1; i++){
            currob = nums[i] + pass;
            curpass = max(pass, rob);
            rob = currob;
            pass = curpass;
        }
        int max1 = max(rob, pass);
        if(len == 1){
            return max1;
        }
        rob = nums[1], pass = 0;
        currob = rob, curpass = pass;
        for(int i = 2; i < len; i++){
            currob = nums[i] + pass;
            curpass = max(pass, rob);
            rob = currob;
            pass = curpass;
        }
        int max2 = max(rob, pass);
        return max(max1, max2);
    }
};