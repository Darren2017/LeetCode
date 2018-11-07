class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        int finalcost[len] = {0};
        for(int i = 2; i < len + 1; i++){
            finalcost[i] = min(finalcost[i - 2] + cost[i - 2], finalcost[i - 1] + cost[i - 1]);
        }
        return finalcost[len];
    }
};

/*
    动态规划
*/