class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int mL = 0;
        int r = 0;
        set<char> tmp;
        int len = s.size();
        while (r < len) {
            if (tmp.find(s[r]) == tmp.end()) {
                tmp.insert(s[r]);
                r++;
            } else {
                tmp.erase(s[l]);
                l++;
            }
            if ((r - l) > mL) {
                mL = r - l;
            }
        }
        return mL;
    }
};
