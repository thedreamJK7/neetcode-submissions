#pragma optimize("OFast","unroll-loops");

static const auto fast = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        while (r > l) {
            if (numbers[l] + numbers[r] == target) 
                break ;
            if (numbers[l] + numbers[r] < target) 
                l++;
            else 
                r--;
        }
        return {l + 1, r + 1};
    }
};
