class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> n;
        for(auto it: nums) {
            // alternative coint() which built in and return 0 if elem is already inside of set, otherwise 1
            if (n.find(it) != n.end()) {
                return true;
            }
            n.insert(it);
        }
        return false;
    }
};