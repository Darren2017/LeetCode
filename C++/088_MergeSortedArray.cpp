class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = nums1.size() - 1, q = n - 1, r = m - 1;
        while(r >= 0 && q >= 0){
            if(nums1[r] >= nums2[q]){
                nums1[p--] = nums1[r--];
            }else{
                nums1[p--] = nums2[q--];
            }
        }
        while(r >= 0){
            nums1[p--] = nums1[r--];
        }
        while(q >= 0){
            nums1[p--] = nums2[q--];
        }
    }
};