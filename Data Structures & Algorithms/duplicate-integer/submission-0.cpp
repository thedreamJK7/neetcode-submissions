class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> dup;
        int size = nums.size();
        int i = 0;
        while (size > i) {
            auto it = find(dup.begin(), dup.end(), nums[i]);
            if (dup.end() != it) {
                return true;
            }
            dup.push_back(nums[i]);
            i++;
        }
        return false;
    }
};