// cast an array of structs to an array of pointers
#include <stdio.h>

typedef struct test_t{
	int x;
	int y;
	int z;
}test_t;

int main(void)
{
	test_t numbers[3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int *num_start = (int *)numbers;	// cast to an array of integers
	
	for(int i = 0; i < 9; i++)
		printf("%d ", num_start[i]);

	printf("\n");

	



	return 0;
}
