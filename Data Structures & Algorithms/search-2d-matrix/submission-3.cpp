class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int l = 0;
        int r = rows * cols - 1;
        while (r >= l) {
            int mid = l + (r - l) / 2;
            if (matrix[mid/cols][mid%cols] == target) return true;
            else if (matrix[mid/cols][mid%cols] > target) r = mid - 1;
            else l = mid + 1;
        }
        return false;
    }
};
