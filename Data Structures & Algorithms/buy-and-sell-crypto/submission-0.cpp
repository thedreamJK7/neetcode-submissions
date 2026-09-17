class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dif = 0;
        int size = prices.size();
        for (int i = 0;size - 1 > i; i++) {
            for (int j = i; size > j; j++) {
                if (dif <= (prices[j] - prices[i])) {
                    dif = prices[j] - prices[i];
                }
            }
        }
        return dif;
    }
};
