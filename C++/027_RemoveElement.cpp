class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size(), a = 0;
        if(len == 0){
            return len;
        }
        for(int i = 0; i < len; i++){
            if(nums[i] == val){
                continue;
            }else{
                nums[a++] = nums[i];
            }
        }
        return a;
    }
};

/*
    和026很像，只是做一些细节改动，依然判断向量为空的情况。
    测评机今天心情不错，跑的很快。
*/