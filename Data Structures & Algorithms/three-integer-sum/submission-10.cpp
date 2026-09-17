class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        vector<vector<int>> res;
        int i = 0;
        int len = n.size();
        sort(n.begin(), n.end());
        while (i < len - 2) {
            int j = i + 1;
            int k = len - 1;
            while (j < k) {
                if (-n[i] == (n[j] + n[k])) {
                    res.push_back({n[i], n[j], n[k]});
                }
                if (-n[i] > (n[j] + n[k])) do { ++j; } while (j < k && n[j] == n[j - 1]);
                else do { --k; } while (j < k && n[k] == n[k + 1]);
            }
            do { ++i; } while (i < len - 2 && n[i] == n[i - 1]);
        }
        return res;
    }
};
