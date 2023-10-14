#ifndef BODY_H
#define BODY_H

#include <vector>

// Function declarations
void printBoard(const std::vector<char>& board);
bool isWin(const std::vector<char>& board, char player);
bool isFull(const std::vector<char>& board);
char switchPlayer(char current);

#endif
