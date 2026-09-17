#pragma optimize("OFast","unroll-loops");

static const auto fast = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = numbers.size() - 1;
        int i = 0;
        while (j > i) {
            if (numbers[i] + numbers[j] == target)
                return {i + 1, j + 1};
            if (numbers[i] + numbers[j] > target) {
                j--;
            } else {
                i++;
            }
        } 
        return {-1, -1};
    }
};
