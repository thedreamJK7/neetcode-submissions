class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int l = 0;
        int r = n.size() - 1;
        sort(n.begin(), n.end());
        while (r > l) {
            if (n[l] + n[r] == t)
                return {l, r};
            if (n[l] + n[r] > t)
                r--;
            else
                l++;
        }
    }
};
