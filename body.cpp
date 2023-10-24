#include "body.h"
#include <iostream>

// Function to print the Tic Tac Toe board
void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |   " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |      " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |   " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |      " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |   " << spaces[8] << "  " << '\n';
    std::cout << "     |     |      " << '\n';
    std::cout << '\n';
}
void playerMove(char *spaces, char player){
    int number;
    do{
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(!number > 0 || !number < 8);
}
void computerMove(char *spaces, char computer){
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer){
    // Check rows
    for(int i = 0; i < 9; i += 3){
        if(spaces[i] != ' ' && spaces[i] == spaces[i+1] && spaces[i+1] == spaces[i+2]){
            if(spaces[i] == player){
                std::cout << "YOU WIN!\n";
                return true;
            } else if(spaces[i] == computer){
                std::cout << "YOU LOSE HAHAHA\n";
                return true;
            }
        }
    }

    // Check columns
    for(int i = 0; i < 3; i++){
        if(spaces[i] != ' ' && spaces[i] == spaces[i+3] && spaces[i+3] == spaces[i+6]){
            if(spaces[i] == player){
                std::cout << "YOU WIN!\n";
                return true;
            } else if(spaces[i] == computer){
                std::cout << "YOU LOSE HAHAHA\n";
                return true;
            }
        }
    }

    // Check diagonals
    if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        if(spaces[0] == player){
            std::cout << "YOU WIN!\n";
            return true;
        } else if(spaces[0] == computer){
            std::cout << "YOU LOSE HAHAHA\n";
            return true;
        }
    }
    if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        if(spaces[2] == player){
            std::cout << "YOU WIN!\n";
            return true;
        } else if(spaces[2] == computer){
            std::cout << "YOU LOSE HAHAHA\n";
            return true;
        }
    }

    return false;
}


bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "TIE\n";
    return true;
}