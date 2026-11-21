class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int l = 0;
        int r = n.size() - 1;
        while (r > l) {
            if (n[l] + n[r] == t)
                return {l, r};
            if (n[l] + n[r] > t)
                r--;
            else
                l++;
        }
        return {0,0};
    }
};
