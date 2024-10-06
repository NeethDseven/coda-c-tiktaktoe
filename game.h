#ifndef GAME_H
#define GAME_H

#define SIZE 3

void initBoard (char board[SIZE][SIZE]);

void printBoard (char board [SIZE][SIZE]);

void computerTurn (char board[SIZE][SIZE]);

int checkWin(char board[SIZE][SIZE]);

int playerTurn (char board[SIZE][SIZE], int player);

int isBoardFull(char board[SIZE][SIZE]);

int canWinNext (char board[SIZE][SIZE], int player, int *row, int *col);

#endif