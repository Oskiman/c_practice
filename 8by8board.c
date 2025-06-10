// 8 x 8 board
// dynamically allocates and outputs an 8 by 8 'board'
// checked for leaks with valgrind --leak-check=yes ./8by8board
#include <stdio.h>
#include <stdlib.h>

void print_board(char** board, int rows, int columns);

int main(void)
{
	const int cols = 8;
	const int rows = 8;

	// allocate for rows
	char **board = (char**)malloc(rows * sizeof(char*));
	if(board == NULL)
	{
		printf("Memory allocation failed!\n");
		return 1;
	}

	// allocate for columns
	for(int i = 0; i < cols; i++)
	{
		board[i] = (char*)malloc(cols * sizeof(char*));
		if(board[i] == NULL)
		{
			printf("Memory allocation failed!\n");
			//free columns
			for(int j = 0; j < cols; j++)
			{
				free(board[j]);
			}
			free(board);	// free base pointer
			return 1;
		}
	}

	// populate board
	for(int i = 0; i < cols; i++)
	{
		for(int j = 0; j < rows; j++)
		{
			board[i][j] = '*';
		}

	}

	print_board(board, rows, cols);

	// free columns
	for(int i = 0; i < rows; i++)
	{
		free(board[i]);
	}

	// free highest level pointer
	free(board);

	return 0;
}

void print_board(char** board, int rows, int cols)
{
// output board
	for(int i = 0; i < cols; i++)
	{
		for(int j = 0; j < rows; j++)
		{
			printf("%c", board[i][j]);
		}

		printf("\n");
	}

}
