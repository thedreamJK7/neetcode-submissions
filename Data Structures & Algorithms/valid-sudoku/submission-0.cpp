class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, vector<int>> cols;
        unordered_map<int, vector<int>> rows;
        map<pair<int, int>, vector<int>> squares;
        int i = 0, j = 0;

        while (9 > i) {
            j = 0;
            for (j = 0; 9 > j; j++) {
                if (board[i][j] == '.')
                    continue;
                cout << board[i][j];
                if (find(cols[j].begin(), cols[j].end(), board[i][j]) != cols[j].end() ||
                    find(rows[i].begin(), rows[i].end(), board[i][j]) != rows[i].end() ||
                    find(squares[{i/3, j/3}].begin(), squares[{i/3, j/3}].end(), board[i][j]) != squares[{i/3, j/3}].end())
                {
                    return false;
                }
                cols[j].push_back(board[i][j]);
                rows[i].push_back(board[i][j]);
                squares[{i/3, j/3}].push_back(board[i][j]);
            }
            i++;
        }
        return true;
    }
};
