#include <iostream>
#include <vector>

using namespace std;

void printBoard(vector<vector<char>>& board) {
    for (auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}


bool checkDraw(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false; // If there is an empty cell, the game is not a draw
            }
        }
    }
    return true; // If no empty cells are found, the game is a draw
}

int main() {
    while (true) {
        vector<vector<char>> board(3, vector<char>(3, ' ')); // Initialize a 3x3 board with empty cells
        char currentPlayer = 'X';
		cout<<" 0 0|0 1|0 2"<<endl
			<<"------------"<<endl
			<<" 1 0|1 1|1 2"<<endl
			<<"------------"<<endl
			<<" 2 0|2 1|2 2 ";
        while (true) {
            printBoard(board);

            int row, col;
            cout << "Player " << currentPlayer << ", enter your move (row 'space' column, both from 0 to 2): ";
            cin >> row >> col;

            if (board[row][col] == ' ') {
                board[row][col] = currentPlayer;

                if (checkWin(board, currentPlayer)) {
                    printBoard(board);
                    cout << "Player " << currentPlayer << " wins!" << endl;
                    break;
                }

                if (checkDraw(board)) {
                    printBoard(board);
                    cout << "It's a draw!" << endl;
                    break;
                }

                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            } else {
                cout << "Cell already occupied. Try again." << endl;
            }
        }

        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        if (playAgain != 'y' && playAgain != 'Y') {
            break;
        }
    }

    return 0;
}
