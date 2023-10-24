#ifndef BODY_H
#define BODY_H

#include <vector>

// Function declarations
// void printBoard(const std::vector<char>& board);
// bool isWin(const std::vector<char>& board, char player);
// bool isFull(const std::vector<char>& board);
// char switchPlayer(char current);

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);


#endif
