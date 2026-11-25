class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxA = 0;
        int l = 0;
        int r = h.size() - 1;
        while (r > l) {
            maxA = max(maxA, min(h[l], h[r]) * (r - l));
            if (h[l] > h[r]) {
                r--;
            } else 
                l++;
        }
        return maxA;
    }
};
