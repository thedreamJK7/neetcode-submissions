class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> dup;
        int size = nums.size();
        int i = 0;
        while (size > i) {
            if (dup.count(nums[i])) {
                return true;
            }
            dup.insert(nums[i]);
            i++;
        }
        return false;
    }
};