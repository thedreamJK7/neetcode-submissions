class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res;
        unordered_map<int, int> num;
        for (int n: nums) {
            num[n]++;
        }
        for (auto n: num) {
            if (n.second == 1) {
                return n.first;
            }
        }
    }
};
