class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int, int> a;
        for (int i = 0; i < n.size(); i++) {
            if (a.find(t - n[i]) != a.end()) {
                return {a[n[i]], i};
            }
            a[n[i]] = i;
        }
        return {};
    }
};
