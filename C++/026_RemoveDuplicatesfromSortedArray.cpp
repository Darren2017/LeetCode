class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size(), a = 0;
        if(len == 0){
            return len;
        }
        for(int i = 1; i < len; i++){
            if(nums[a] == nums[i]){
                continue;
            }else{
                nums[++a] = nums[i];
            }
        }
        return a + 1;
    }
};

/*
    设置两个指针，遍历向量，类似荷兰旗的做法。
    注意向量为空的情况。
*/