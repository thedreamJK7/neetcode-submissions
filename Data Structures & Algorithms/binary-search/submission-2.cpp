const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid;
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            mid = r - (r - l) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1; 
            }
        }
        return -1;
    }
};
