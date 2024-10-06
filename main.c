#include <stdio.h>
#include "game.h"
#include "display.h"
#include <stdlib.h>
#include <time.h>


int main()
{
	char board [SIZE][SIZE];
	int player = 1;
	int gameMode = 0;
	int win = 0;

	initBoard(board);

	printf("Bienvenu dans le jeu TikTakToe !\n");
	printf("Choisissez le mode de jeu :\n");
	printf("1. Joueur contre Ordinateur\n");
	printf("2. Joueur contre Joueur\n");
	scanf("%d" , &gameMode);

	if (gameMode != 1 && gameMode != 2) {
		printf("Choix invalide. le mode de jeu par défaut sera joueur contre Ordinateur.\n");
		gameMode = 1;
	}

	printBoard(board);

	while(!win && !isBoardFull(board)) {
		system("clear");
		printBoard(board);
		if(gameMode == 1 && player == 2) {
			printf("Tour de l'Ordinateur .\n");
			computerTurn(board);
		} else {

			printf("Tour du joueur %d\n", player);
			playerTurn(board, player);
	}
		
		win = checkWin(board);

	if(win) {
		system("clear");
		printBoard(board);
		printf("Joueur %d a gagné !\n", player );
		break;
	}

	if (isBoardFull(board)){
		system("clear");
		printBoard(board);
		printf("Match nul ! \n");
		break;
	}

		player = (player == 1)? 2 : 1;

	}	
	return 0;
}