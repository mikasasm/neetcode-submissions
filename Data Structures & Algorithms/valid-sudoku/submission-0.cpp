class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int n = board.size();
        int m = board[0].size();

        // 1. Check rows
        for(int i = 0; i < n; i++) {

            unordered_set<char> set;

            for(int j = 0; j < m; j++) {

                char val = board[i][j];

                if(val == '.') {
                    continue;
                }

                if(set.count(val) == 1) {
                    return false;
                }

                set.insert(val);
            }
        }

        // 2. Check columns
        for(int j = 0; j < m; j++) {

            unordered_set<char> set;

            for(int i = 0; i < n; i++) {

                char val = board[i][j];

                if(val == '.') {
                    continue;
                }

                if(set.count(val) == 1) {
                    return false;
                }

                set.insert(val);
            }
        }

        // 3. Check 3x3 boxes
        for(int row = 0; row < 9; row += 3) {

            for(int col = 0; col < 9; col += 3) {

                unordered_set<char> set;

                for(int i = row; i < row + 3; i++) {

                    for(int j = col; j < col + 3; j++) {

                        char val = board[i][j];

                        if(val == '.') {
                            continue;
                        }

                        if(set.count(val) == 1) {
                            return false;
                        }

                        set.insert(val);
                    }
                }
            }
        }

        return true;
    }
};