class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r = INT_MIN;
        int n = piles.size();
        for(int i=0;i<n;i++){
            if(r < piles[i])
                r = piles[i];
        }
        int l = 1;
        int res = r;

        while (l <= r) {
            int k = (l + r) / 2;

            long totalTime = 0;
            for (int pile: piles) {
                totalTime += ceil(static_cast<double>(pile) / k);
            }

            if (totalTime <= h) {
                res = k;
                r = k - 1;
            } else {
                l = k + 1;
            }
        }
        return (res);
    }
};
