// 8 x 8 board
// dynamically allocates and outputs an 8 by 8 'board'
// not much but its a start
// checked for leaks with valgrind --leak-check=yes ./8by8board
#include <stdio.h>
#include <stdlib.h>

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
			//free
			for(int j = 0; j < cols; j++)
			{
				free(board[j]);
			}
			free(board);
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

	// output board
	for(int i = 0; i < cols; i++)
	{
		for(int j = 0; j < rows; j++)
		{
			printf("%c", board[i][j]);
		}

		printf("\n");
	}
	// free columns
	for(int i = 0; i < rows; i++)
	{
		free(board[i]);
	}
	//free(board[0]);
	//free(board[1]);
	//free(board[2]);
	//free(board[3]);
	//free(board[4]);
	//free(board[5]);
	//free(board[6]);
	//free(board[7]);

	// free highest level pointer
	free(board);

	return 0;
}
