#include <stdio.h>
#include "display.h"

void printBoard(char board[SIZE][SIZE]){
	printf("\n");

	for(int i = 0; i < SIZE; i++){

		for(int j = 0; j < SIZE; j++){
			
				printf(" %c ", board[i][j]);
			
			if(j < SIZE - 1) {
			
				printf("|");
			}
		}
		printf("\n");

		if (i < SIZE - 1) {

			printf("---|---|---\n");
		}
	}
	printf("\n");
}