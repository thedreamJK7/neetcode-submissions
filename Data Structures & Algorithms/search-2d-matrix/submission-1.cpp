class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        for (int i = 0; rows > i; ++i) {
            int l = 0;
            int r = cols - 1;
            while (r >= l) {
                int mid = l + (r - l) / 2;
                if (matrix[i][mid] == target) {
                    return true;
                }
                if (matrix[i][mid] > target) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
        }
        return false;
    }
};
