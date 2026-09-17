class Solution {
public:

    string encode(vector<string>& strs) {
        int i = 0;
        string res = "";
        while (strs.size() > i) {
            res += to_string(strs[i].size()) + "#" + strs[i];
            i++;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;
        while (s.size() > i) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int len = atoi(s.substr(i, j - i).c_str());
            strs.push_back(s.substr(j + 1, len));
            i = j + 1 + len;
        }
        return strs;
    }
};
