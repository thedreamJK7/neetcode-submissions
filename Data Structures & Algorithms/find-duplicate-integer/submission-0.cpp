class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> dup;
        int i = 0;
        while (nums[i]) {
            auto it = find(dup.begin(), dup.end(), nums[i]);
            if (it != dup.end()) {
                return nums[i];
            }
            dup.push_back(nums[i]);
            i++;
        }
        return 0;
    }
};
