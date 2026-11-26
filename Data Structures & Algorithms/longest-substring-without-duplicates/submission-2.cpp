class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> res;
        int len = s.length();
        int l = 0;
        int r = 0;
        int m = 0;
        while (r < len) {
            if (res.count(s[r])) {
                res.erase(s[l]);
                l++;
            } else {
                m = max(m, r - l + 1);
                res.insert(s[r]);
                r++;
            }
        }
        return m;
    }
};
