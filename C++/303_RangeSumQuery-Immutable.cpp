class NumArray {
public:
    vector<int> sums;
    NumArray(vector<int> nums) {
        sums.push_back(0);
        int len = nums.size();
        if(len == 0){
            return;
        }
        for(int i = 0; i < len; i++){
            sums.push_back(nums[i] + sums[i]);
        }
    }
    
    int sumRange(int i, int j) {
        return sums[j + 1] - sums[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */


/*
    前缀和，打卡，感觉不像是动态规划啊，还在摸索动态规划
*/