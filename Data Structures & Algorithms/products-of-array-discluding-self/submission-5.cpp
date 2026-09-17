auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int res = 1, len = nums.size();
        vector<int> pref(len);
        pref[0] = 1;
        for (int i = 1; len > i; i++) {
            res = nums[i - 1] * pref[i - 1]; 
            pref[i] = res;
        }
        res = 1;
        for (int i = len - 1; i >= 0; i--) {
            pref[i] = pref[i] * res;
            res *= nums[i]; 
        }
        return pref;
    }
};

