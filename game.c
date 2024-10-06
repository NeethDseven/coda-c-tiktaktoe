#include <stdio.h>
#include "game.h"

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