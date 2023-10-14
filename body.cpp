#include "body.h"
#include <iostream>

// Function to print the Tic Tac Toe board
void printBoard(const std::vector<char>& board) {
    std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << std::endl;
    std::cout << "---|---|---" << std::endl;
    std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << std::endl;
    std::cout << "---|---|---" << std::endl;
    std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << std::endl;
}

// Function to check if the current player has won
bool isWin(const std::vector<char>& board, char player) {
    // Check rows, columns and diagonals for a win
    for (int i = 0; i < 3; ++i) {
        if ((board[i*3] == player && board[i*3 + 1] == player && board[i*3 + 2] == player) || 
            (board[i] == player && board[i + 3] == player && board[i + 6] == player))
            return true;
    }

    if ((board[0] == player && board[4] == player && board[8] == player) || 
        (board[2] == player && board[4] == player && board[6] == player))
        return true;

    return false;
}

// Function to check if the board is full (draw)
bool isFull(const std::vector<char>& board) {
    for (char cell : board) {
        if (cell != 'X' && cell != 'O')
            return false;
    }
    return true;
}

// Function to switch the current player
char switchPlayer(char current) {
    return current == 'X' ? 'O' : 'X';
}
