#include <iostream>
#include <vector>
#include "body.h"

int main() {
    std::vector<char> board(9, ' '); // Create a 3x3 board filled with spaces
    char player = 'X'; // Start with player X
    int position;

    while (true) {
        printBoard(board); // Print the current board
        std::cout << "Player " << player << ", enter your position (0-8): ";
        std::cin >> position;

        // Check if the position is valid
        if (position < 0 || position >= 9 || board[position] != ' ') {
            std::cout << "Invalid position, try again." << std::endl;
            continue;
        }

        board[position] = player; // Place the player's mark on the board

        // Check for a win or a draw
        if (isWin(board, player)) {
            printBoard(board);
            std::cout << "Player " << player << " wins!" << std::endl;
            break;
        } else if (isFull(board)) {
            printBoard(board);
            std::cout << "It's a draw!" << std::endl;
            break;
        }

        player = switchPlayer(player); // Switch to the other player
    }

    return 0;
}
