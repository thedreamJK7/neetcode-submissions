class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int, int> nums;
        for (int i = 0; i < n.size(); i++) {
            int difference = t - n[i];
            cout << difference;
            if (nums.count(difference) != 0) {
                return {nums[difference], i};
            } else {
                nums[n[i]] = i;
            }
        }
        return {};
    }
};
