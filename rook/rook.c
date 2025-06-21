// Rook puzzle
// valgrind --leak-check=yes ./rook
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void print_board(char** board, int ROWS, int COLS);
char** allocate_rows(int ROWS);
char** allocate_cols(char** board, int COLS);
char** populate_board(char** board, int COLS, int ROWS);

//TODO: refactor allocations to get rid of unneeded elements
//TODO: figure out way to update board - different function()?
//TODO: open a new window to print board to
//
int main(void)
{
	const int ROWS = 4;
	const int COLS = 5;

	char** board = allocate_rows(ROWS);
	board = allocate_cols(board, COLS);
	board = populate_board(board, COLS, ROWS);
	print_board(board, ROWS, COLS);

	// free columns
	for(int i = 0; i < COLS; i++)
	{
		free(board[i]);
	}

	// free rest
	free(board);

	return 0;
}

char** allocate_rows(int ROWS)
{
	char** board = (char**)malloc(ROWS * sizeof(char*));
	if(board == NULL)
	{
		printf("Memory allocation for rows failed!\n");
		exit(1);
	}

	return board;
}

char** allocate_cols(char** board, int COLS)
{
	for(int i = 0; i < COLS; i++)
	{
		board[i] = (char*)malloc(COLS * sizeof(char*));
		if(board[i] == NULL)
		{
			printf("Memory allocation for columns failed!\n");
			//free cols
			for(int j = 0; j < COLS; j++)
			{
				free(board[j]);
			}

			free(board);
			exit(1);
		}
	}

	return board;
}

void print_board(char** board, int ROWS, int COLS)
{
	for(int i = 0; i < COLS; i++)
	{
		for(int j = 0; j < ROWS; j++)
		{
			printf("%c", board[i][j]);
		}

		printf("\n");
	}
}


char** populate_board(char** board, int COLS, int ROWS)
{
	for(int i = 0; i < COLS; i++)
	{
		for(int j = 0; j < ROWS; j++)
		{
			if(i == 0 && j == 0)
				board[i][j] = 'R';
			if(i == 0 && j == 1 || i == 0 && j == 2 || i == 0 && j == 3)
				board[i][j] = ' ';
			if(i == 1)
				board[i][j] = 'B';
			if(i == 2)
				board[i][j] = 'K';
			if(i == 3)
				board[i][j] = 'P';
			if(i == 4 && j == 0 || i == 4 && j == 1 || i == 4 &&  j == 2)
				board[i][j] = ' ';
			if(i == 4 && j == 0 || i == 4 && j == 1 || i == 4 && j == 2)
				board[i][j] = ' ';
			if(i == 4 && j == 3)
				board[i][j] = 'X';
		}
	}
	
	return board;

}

