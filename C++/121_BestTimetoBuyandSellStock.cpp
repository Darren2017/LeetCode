class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0], maxprice = 0, len = prices.size();
        for(int i = 0; i < len; i++){
            if(prices[i] < min){
                min = prices[i];
            }
            if(prices[i] - min > maxprice){
                maxprice = prices[i] - min;
            }
        }
        return maxprice;
    }
};

/*
    感觉这个不像是DP啊！
*/