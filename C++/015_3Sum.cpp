class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        vector<int> childans(3);
        vector<vector<int> > ans;
        sort(nums.begin(), nums.end());
        int len = nums.size(), sum;
        for(int i = 0; i < len - 2; i++){
            sum = -nums[i];
            childans[0] = nums[i];
            int j = i + 1, k = len - 1;
            while(j < k){
                if(nums[j] + nums[k] == sum){
                    childans[1] = nums[j++];
                    childans[2] = nums[k--];
                    ans.push_back(childans);
                    while(j < k && nums[j] == nums[j - 1]){
                        j++;
                    }
                    while(j < k && nums[k] == nums[k + 1]){
                        k++;
                    }
                }else if(nums[j] + nums[k] < sum){
                    j++;
                }else{
                    k--;
                }
            }
            while(i < len - 2 && nums[i + 1] == nums[i]){
                i++;
            }
        }
        return ans;
    }
};

/*
    首先将向量排序，排序后可以使用双指针，将三重循环的后两重转化位一重循环，降低一个级别的时间复杂度。排序时间复杂度O(logn),查找为O(n**2)。
*/