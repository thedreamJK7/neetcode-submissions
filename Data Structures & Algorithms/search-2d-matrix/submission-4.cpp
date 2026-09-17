class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int rows = mat.size(), cols = mat[0].size();
        int l = 0, r = rows * cols - 1;
        while (l <= r) {
            int mid = r - (r - l) / 2;
            int val = mat[mid / cols][mid % cols];
            if (val == t) {
                return true;
            } else if (val > t) {
                r = mid - 1;
            } else {
                l = mid + 1; 
            }
        }
        return false;
    }
};
