// change array values
#include <stdio.h>

int main(void)
{
	int num_array[5] = {1, 2, 3, 4, 5};

	int length = sizeof(num_array) / sizeof(num_array[0]);

	for(int i = 0; i < length; i++)
		printf("%d ", num_array[i]);

	printf("\n");

	//change array values
	num_array[0] = 99;
	num_array[4] = 100;

	for(int i = 0; i < length; i++)
		printf("%d ", num_array[i]);

	printf("\n");

	return 0;
}
