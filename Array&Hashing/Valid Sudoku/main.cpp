#include <bits/stdc++.h>

using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {  
    vector<vector<bool>> rows(9, vector<bool>(9, false));
    vector<vector<bool>> columns(9, vector<bool>(9, false));
    vector<vector<bool>> subBoxes(9, vector<bool>(9, false));


    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            char currCell = board[i][j];
            if(currCell == '.') {
                continue;
            }

            int index = currCell - '0' - 1;

            int subBoxIndex = (i/3) * 3 + (j/3);
            if(rows[i][index] || columns[index][j] || subBoxes[subBoxIndex][index]) {
                return false;
            }

            rows[i][index] = true;
            columns[index][j] = true;
            subBoxes[subBoxIndex][index] = true;
        }
    }

    return true;
}

int main() {
    vector<vector<char>> board1 = {
            {'5','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','6','.','.','.','3'},
            {'4','.','.','8','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'}
        };

    bool result = isValidSudoku(board1);

    if(result) {
        cout << "Success" << endl;
    } else{
        cout << "Error" << endl;
    }

    return 0;
}