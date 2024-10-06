#include <stdio.h>
#include "game.h"
#include "display.h"


int main()
{
	char board [SIZE][SIZE];
	int player = 1;
	int moves = 0;
	int win = 0;

	initBoard(board);

	while(moves < SIZE * SIZE && !win){
		printBoard(board);
		if (playerTurn(board, player)){
			moves++;
			win = checkWin(board);
		if (win){
			printf("Joueur %d a gagné\n", player);
		}
		else if (moves == SIZE * SIZE){

			printf("Match nul\n");
		}
		player = (player == 1) ? 2 : 1;
	}
}

	printBoard(board);
	return 0;
}