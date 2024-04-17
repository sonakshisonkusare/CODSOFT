//Tic-Tac-Toe setup
#include <iostream>
#include <vector>
using namespace std;

//Function for drawing setup
void setup_draw(const vector<vector<char>>& setup) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << setup[i][j];
            if (j < 2)
                cout << " | ";
        }
        cout << endl;
        if (i < 2)
            cout << "---------" << endl;
    }
}


bool checkWin(const vector<vector<char>>& setup, char player) {
    for (int i = 0; i < 3; ++i) {
        if (setup[i][0] == player && setup[i][1] == player && setup[i][2] == player)
            return true;
        if (setup[0][i] == player && setup[1][i] == player && setup[2][i] == player)
            return true;
    }
    if ((setup[0][0] == player && setup[1][1] == player && setup[2][2] == player) ||
        (setup[0][2] == player && setup[1][1] == player && setup[2][0] == player))
        return true;
    return false;
}

int main() {
    vector<vector<char>> setup(3, vector<char>(3, ' ')); // Initialize empty setup
    int row, colm;
    char currentPlayer = 'X';
    bool Win= false;
    int moves = 0;

    cout << "Welcome to the game!" << endl;
    cout << "Opponent 1: X, Opponent 2: O" << endl;

    while (!Win && moves < 9) {
        setup_draw
    (setup);
        cout << "Opponent 1 " << currentPlayer << ", please enter your move (row and column): ";
        cin >> row >> colm;

        if (row >= 0 && row < 3 && colm >= 0 && colm < 3 && setup[row][colm] == ' ') {
            setup[row][colm] = currentPlayer;
            Win = checkWin(setup, currentPlayer);
            if (!Win) {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
                moves++;
            }
        } else {
            cout << "Not a valid move! try again." << endl;
        }
    }
   setup_draw
(setup);
    
    // Output the result
    if (Win)
        cout << "Opponent " << currentPlayer << " winner!" << endl;
    else
        cout << "Draw Happend!" << endl;

    return 0;
}
