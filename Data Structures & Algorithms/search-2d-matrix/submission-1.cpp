class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int mid;
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            mid = r - (r - l) / 2;
            if (nums[mid] == target) {
                return true;
            } else if (nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1; 
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int matS = mat.size();
        int i = 0;
        while (matS > i) {
            if (search(mat[i], t)) {
                return true;
            }
            i++;
        }
        return false;
    }
};
