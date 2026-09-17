static const auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1;
        int s = 0, maxS = 0;
        while (i != j) {
            s = (j - i) * min(heights[i], heights[j]);
            maxS = max(s, maxS);
            if (heights[i] < heights[j]) i++;
            else j--;
        }
        return maxS;
    }
};
