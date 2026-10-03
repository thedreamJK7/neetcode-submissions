class Solution {
public:
    int maxProfit(vector<int>& p) {
        int l = 0;
        int len = p.size();
        int profit = 0;
        for (int r = 1; len > r; r++) {
            if (p[r] > p[l]) {
                profit = max(profit, p[r] - p[l]); 
            } else {
                l = r;
            }
        }
        return profit;
    }
};
