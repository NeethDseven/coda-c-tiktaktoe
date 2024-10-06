#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int canWinNext(char board[SIZE][SIZE], int player, int *row, int *col){
	for (int r = 0; r < SIZE; r++){
		for (int c =0; c < SIZE; c++) {
			if (board[r][c] == ' ') {
				board[r][c] = (player == 1) ? 'X' :'O';
				if(checkWin(board)){
					*row = r;
					*col = c;
					board[r][c] = ' ';
					return 1;
				}
				board[r][c] = ' ';
			}
		}
	}
	return 0;
}



void initBoard(char board[SIZE][SIZE]) {

	for (int i = 0; i < SIZE; i++) {

		 for (int j = 0; j < SIZE; j++) {
		 	board[i][j] = ' ';
		 }
	}
}

int checkWin (char board[SIZE][SIZE]) {

	for(int i = 0; i < SIZE; i++) {

		if (board[i][0] == board [i][1] && board [i][1] == board [i][2] && board [i][0] != ' ') {
			return 1;
		}
	}

	for(int i = 0; i < SIZE; i++) {
		if (board[0][i] == board [1][i] && board [1][i] == board[2][i] && board[0][i] != ' '){
			return 1;
		}
	}
	for (int i = 0; i < SIZE ; i++){
		if (board[0][0] == board [1][1] && board [1][1] == board [2][2] && board [0][0] != ' ') {
			return 1;
		}
		if (board[0][2] == board [1][1] && board [1][1] == board [2][0] && board [0][2] != ' ') {
			return 1;
		}

	}
	return 0;
}
 


int playerTurn(char board[SIZE][SIZE], int player){

	int row, col;
	char symbol = (player == 1) ? 'X' : 'O';

	do{
	printf("Joueur %d entrez votre ligne (1-3) et votre colonne (1-3)\n", player );
	scanf("%d %d", &row, &col);

row--;
col--;	

		if(row >= 0 && row < SIZE && col >= 0 && col < SIZE && board [row][col] == ' ') {
			board[row][col] = symbol;
			return 1;
		
		}	else{
				printf("Mouvement invalide, esseyez à nouveau.\n");
				}
		}		while(1);
				
		} 
		void computerTurn(char board[SIZE][SIZE]){
	int row, col;

	if(canWinNext(board, 2, &row, &col)){
		board[row][col] ='O';
		return;
	}
	if (canWinNext(board, 1, &row, &col)){
		board[row][col] = 'O';
		return;
	}

	do{
		row = rand() % SIZE;
		col = rand() % SIZE;
	} while (board[row][col] != ' ');

	board[row][col] = 'O';

	printf("L'ordinateur a joué en position (%d, %d).\n", row + 1, col + 1);
}
		int isBoardFull(char board[SIZE][SIZE]){
			for (int i = 0; i < SIZE; i++){
				for( int j = 0; j < SIZE; j++){
					if(board[i][j] == ' '){
						return 0;
					}
				}
			}
			return 1;
		}