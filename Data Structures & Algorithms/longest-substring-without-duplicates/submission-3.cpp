class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> res;
        int maxLen = 0;
        int l = 0;
        for (int r = 0; s.size() > r; r++) {
            while (res.find(s[r]) != res.end()) {
                res.erase(s[l]);    
                l++;
            }
            res.insert(s[r]);
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};
