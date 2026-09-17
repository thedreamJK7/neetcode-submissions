class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        string tmp;
        vector<vector<string>> res;
        int len = strs.size(), i = 0;
        while (len > i) {
            tmp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            hashmap[strs[i]].push_back(tmp);
            i++;
        }
        for (auto i: hashmap) {
            res.push_back(i.second);
        }
        return (res);
    }
};
