// Rook puzzle
// valgrind --leak-check=yes ./rook
#include <stdio.h>
#include <stdlib.h>

void print_board(char** board, int ROWS, int COLS);
char** allocate_rows(int ROWS);

//TODO: allocate_columns()
//TODO: populate_board()
//TODO: refactor allocations to gt rid of unneeded elements
//TODO: figure out return value if allocation fails
//TODO; other stuff I haven't even thought about yet
//TODO; replace '*'s with R, B, K, P, X as a visual aid

int main(void)
{
	const int ROWS = 5;
	const int COLS = 4;

	char** board = allocate_rows(ROWS);
	// allocate memory for rows
//	char** board = (char**)malloc(ROWS * sizeof(char*));
//	if(board == NULL)
//	{
//		printf("Memory allocation for rows failed!\n");
//		return 1;
//	}

	// allocate memory for columns
	for(int i = 0; i < COLS; i++)
	{
		board[i] = (char*)malloc(COLS * sizeof(char*));
		if(board[i] == NULL)
		{
			printf("Memory allocation for columns failed!\n");
			//free columns
			for(int j = 0; j < COLS; j++)
			{
				free(board[j]);
			}

			free(board);
			return 1;
		}
	}
	
	// populate board
	for(int i = 0; i < COLS; i++)	// I may have these the wrong way round?
	{
		for(int j = 0; j < ROWS; j++)
		{
			//if i == 0 && j == 1 , 2, 3
			//then print ' '
			//if i == 4 && j = 0, 1, 2
			//then print ' '
			//if i == 0 && j == 0
			//print R
			//if i == 1
			//then print B
			//if i == 2
			//then print K
			//if i == 3
			//then print P
			//if i == 4 && j == 0, 1, 2
			//print ' '
			//if i == 4 && j == 3 print X
			board[i][j] = '*';
		}
	}

	print_board(board, ROWS, COLS);

	// free columns
	for(int i = 0; i < ROWS; i++)
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
		return 1;
	}

	return board;
}

void print_board(char** board, int ROWS, int COLS)
{
	for(int i = 0; i < COLS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			printf("%c", board[i][j]);
		}

		printf("\n");
	}
}
