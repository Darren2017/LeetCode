#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
    int *ans = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++){
        for (int j = i + 1; j < numsSize; j++){
            if (nums[i] + nums[j] == target){
                ans[0] = i;
                ans[1] = j;
            }
        }
    }
    return ans;
}

int main()
{
    int nums[10] = {2,7,11,15};
    int numsSize = 4;
    int targer = 9;
    twoSum(nums, numsSize, targer);
    
    return 0;
}