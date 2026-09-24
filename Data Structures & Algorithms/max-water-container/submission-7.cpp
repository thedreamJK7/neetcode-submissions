class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = INT_MIN;
        int l = 0;
        int r = heights.size() - 1;
        while (l < r) {
            int s = min(heights[l], heights[r]) * (r - l);
            if (res < s) {
                res = s;
            }
            if (heights[l] > heights[r]) {
                r--;
            } else {
                l++;
            }
        }
        return res;
    }
};
