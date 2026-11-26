class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> chs;
        int l = 0;
        int r = 0;
        int res = 0;
        while (r < s.length()) {
            chs[s[r]]++;
            int mf = 0;
            for (auto it = chs.begin(); it != chs.end(); ++it) {
                if (it->second > mf) {
                    mf = it->second;
                }
            }
            if (r - l + 1 - mf <= k) {
                res = max(res, r - l + 1);
            } else {
                chs[s[l]]--;
                l++;
            }
            r++;
        }
        return res;
    }
};
