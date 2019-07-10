class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> map1;
        for(int i = 0; i < nums.size(); i++){
            map1[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++){
            if(map1.count(target - nums[i]) && map1[target - nums[i]] != i){
                ans.push_back(i);
                ans.push_back(map1[target - nums[i]]);
                break;
            }
        }
    return ans;
    }
};