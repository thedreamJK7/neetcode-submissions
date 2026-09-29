class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        for (int n: nums) {
            if (n == target) return i;
            i++;
        }
        return -1;
    }
};
