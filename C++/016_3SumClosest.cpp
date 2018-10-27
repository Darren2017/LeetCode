class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff = __INT_MAX__, sum;
        sort(nums.begin(), nums.end());
        int len = nums.size(), cur;
        for(int i = 0; i < len - 2; i++){
            cur = nums[i];
            int j = i + 1, k = len - 1;
            while(j < k){
                if(target - (nums[j] + nums[k] + cur) == 0){
                    return target;
                }
                if(abs(target - (nums[j] + nums[k] + cur)) < diff){
                    if(target > nums[j] + nums[k] + cur){
                        diff = abs(target - (nums[j] + nums[k] + cur));
                        sum = (nums[j++] + nums[k] + cur);
                    }else{
                        diff = abs(target - (nums[j] + nums[k] + cur));
                        sum = (nums[j] + nums[k--] + cur);
                    }
                }else{
                    if(target > nums[j] + nums[k] + cur){
                        j++;
                    }else{
                        k--;
                    }
                }
            }
            while(i < len - 2 && nums[i + 1] == nums[i]){
                i++;
            }
        }
        return sum;
    }
};

/*
    相较于上一题改变一下判读条件和处理方式即可，还是用到了双指针。
*/