class Solution {
public:
    int maximalSquare(vector<vector<char>>& m) {
        int res = 0;
        vector<vector<int>> cache(m.size(), vector<int>(m[0].size(), 0));
        int i = 0;
        int r = m.size();
        int c = m[0].size();
        while (r > i) {
            int j = 0;
            while (c > j) {
                if (i == 0 || j == 0) {
                    if (m[i][j] == '1') cache[i][j] = 1;
                    else {
                        j++;
                        continue;
                    }
                } else if (m[i][j] == '1') {
                    cache[i][j] = 1 + min(min(cache[i - 1][j - 1], cache[i][j - 1]), cache[i - 1][j]);
                }
                if (cache[i][j] > res) res = cache[i][j]; 
                j++;
            }
            i++;
        }
        return res * res;
    }
};