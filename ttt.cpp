#include <iostream>
#include <vector>
#include <ctime>
#include "body.h"

int main() {
    char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    
    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);

        computerMove(spaces, computer);
        drawBoard(spaces);
    }
}
