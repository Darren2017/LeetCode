class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size() - 1;
        for(int i = len; i >= 0; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }else{
                digits[i] += 1;
                return digits;
            }
        }
        if(digits[0] == 0){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

/*
    向量是可以直接插入的........
*/