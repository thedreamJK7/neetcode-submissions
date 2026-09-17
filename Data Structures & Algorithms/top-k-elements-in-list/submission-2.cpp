class Solution {
public:
    static bool cmp(pair<int, int>& a, 
        pair<int, int>& b)
    { 
        return a.second < b.second; 
    } 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>     fr;
        vector<pair<int, int>>      res;
        int                         len = nums.size();
        for (int i = 0; len > i; i++) {
            fr[nums[i]]++;
        }
        int i = 0;
        for (auto it = fr.begin(); fr.end() != it; i++) {
            pair<int, int> tmp;
            tmp.first = (*it).first;
            tmp.second = (*it).second;
            res.push_back(tmp);
            it++;
        }
        sort(res.begin(), res.end(), cmp);
        vector<int> ret(k);
        auto t = res.end();
        for(int i = k - 1; i >= 0; i--) {
            ret[i] = (*(--t)).first;
        }
        return ret;
    }
};
