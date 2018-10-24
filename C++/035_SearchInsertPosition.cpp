class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size(), ans = 0;
        while(l < r){
            int mid = (l + r) / 2;
            if(nums[mid] == target){
                return mid;
            }else{
                if(target > nums[mid]){
                    l = mid + 1;
                }else{
                    r = mid;
                }
            }
        }
        return l;
    }
};

/*
    有序数组，提高速度用二分法,时间复杂度减至O(logN)。
*/