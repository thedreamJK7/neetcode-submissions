class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (auto it: nums) {
            count[it]++;
        }
        vector<pair<int, int>> freq;
        for (const auto& p: count) {
            freq.push_back({p.second, p.first});
        }
        sort(freq.begin(), freq.end());
        
        vector<int> res;
        int sz = freq.size();
        for (int i = sz - 1; i > sz - k - 1; --i) {
            res.push_back(freq[i].second);
        }
        return res;
    }
};
