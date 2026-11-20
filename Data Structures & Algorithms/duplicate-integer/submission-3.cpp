class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> n;
        for(auto it: nums) {
            if (n.find(it) != n.end()) {
                return true;
            }
            n.insert(it);
        }
        return false;
    }
};