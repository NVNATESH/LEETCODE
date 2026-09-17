class Solution {
public:
    bool solve(vector<vector<char>>& board, string& word, int i, int j, int k, vector<vector<bool>>& use) {
        if (k == word.size())
            return true;
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || use[i][j] || board[i][j] != word[k]) 
        {
            return false;
        }
        use[i][j] = true;
        bool found = solve(board, word, i + 1, j, k + 1, use) || solve(board, word, i - 1, j, k + 1, use) || solve(board, word, i, j + 1, k + 1, use) || solve(board, word, i, j - 1, k + 1, use);
        use[i][j] = false;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> use(board.size(),vector<bool>(board[0].size(), false));
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (solve(board, word, i, j, 0, use))
                    return true;
            }
        }
        return false;
    }
};