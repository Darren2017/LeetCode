class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1 > n2){
            return findMedianSortedArrays(nums2, nums1);
        }else{
            int k = (n1 + n2 + 1) / 2;      //k表示第k个数，可能我为我们要寻找的中位数，或者左中位数
            int l = 0, r = n1;
            while(l < r){                   //二分查找，找出nums1需要在中位数的左边提供几个数字，k - m1得出nums2提供几个。
                int m1 = l + (r - l) / 2;
                int m2 = k - m1;
                if(nums1[m1] < nums2[m2 - 1]){
                    l = m1 + 1;
                }else{
                    r = m1;
                }
            }
            int m1 = l, m2 = k - l;
            int ans1 = max(m1 <= 0 ? INI_MIN : nums1[m1 - 1], m2 <= 0 ? INI_MIN : nums2[m2 -1]);    //考虑边界情况，可能有一个向量左边一个值也没有
            if ((n1 + n2) % 2){
                return ans1;
            }else{
                int ans2 = min(m1 >= n1 ? INI_MAX : nums1[m1], m2 >= n2 ? INI_MAX : nums2[m2]);
                return (ans1 + ans2) * 0.5;
            }
        }
    }
};

/*
很熟悉的log(n)级别的复杂度，提示我们用二分查找。
*/