class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size(), l = 0, r = len - 1;
        int max = 0, tem;
        while(l < r && l < len && r >= 0){
            tem = min(height[l], height[r]) * (r - l);
            if(tem > max){
                max = tem;
            }
            if(height[l] < height[r]){
                l++;
            }else{
                r++;
            }
        }
        return max;
    }
};

/*
贪心
哪边的高度低，则哪边限制了容积的增加，所以只需要移动限制边即可。
*/