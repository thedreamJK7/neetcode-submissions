class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        unordered_set<int> res;

        for (auto &it: nums) {
            res.insert(it);
        }
        vector<int> nn(res.begin(), res.end());
        sort(nn.begin(), nn.end());
        int prevS = 0;
        int currentS = 0;
        int tmp = *(nn.begin());
        for (auto it = ++nn.begin(); nn.end() != it; it++) {
            if ((*it - tmp) == 1) {
                currentS++;
            } else {
                currentS = 0;
            }
            if (prevS < currentS) {
                prevS = currentS;
            }
            tmp = *it;
        }
        return (++prevS);
    }
};
