class Solution {
public:
    vector<vector<int> > fourSum(vector<int>& nums, int target) {
        set<vector<int> >ans;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for(int i = 0; i < len - 3; i++){
            for(int j = i + 1; j < len - 2; j++){
                int l =  j + 1, r = len - 1;
                while(l < r){
                    if(nums[i] + nums[j] + nums[l] + nums[r] == target){
                        vector<int> childans{nums[i], nums[j], nums[l], nums[r]};
                        ans.insert(childans);
                        r--, l++;
                    }else if(nums[i] + nums[j] + nums[l] + nums[r] < target){
                        l++;
                    }else{
                        r--;
                    }
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};

/*
    O(logn^3)，以为有简单的方法想了好久都没想到，去网上看，结果都是比前一个题加了一个for循环。
    不过似乎有个O（nlogn)的算法。
*/