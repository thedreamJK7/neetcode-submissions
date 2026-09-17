class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int len = s.size(), i = 0;
        while (len > i) {
            if (s[i] != t[i])
                return false;
            i++;
        }
        return true;
    }
};
