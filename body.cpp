#include "body.h"
#include <iostream>

// Function to print the Tic Tac Toe board
void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "   " << spaces[0] << "  |  " << spaces[1] << "   |    " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |      " << '\n';
    std::cout << "   " << spaces[3] << "  |  " << spaces[4] << "   |    " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |      " << '\n';
    std::cout << "   " << spaces[6] << "  |  " << spaces[7] << "   |    " << spaces[8] << "  " << '\n';
    std::cout << "     |     |      " << '\n';
    std::cout << '\n';
}
void playerMove(char *spaces, char player){

}
void computerMove(char *spaces, char computer){

}
bool checkWinner(char *spaces, char player, char computer){
    return 0;
}
bool checkTie(char *spaces){
    return 0;
}