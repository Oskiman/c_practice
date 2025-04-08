// array as pointer
#include <stdio.h>

int main(void)
{
	int num_array[5] = {1, 2, 3, 4, 5};

	// using array notation
	printf("The second element is: %d\n", num_array[1]);

	// using pointer notation
	printf("The fourth element is: %d\n", *(num_array + 4)); 

	// loop with pointer arithmetic
	for(int i = 0; i < 5; i++)	// I know we are using magic numbers here
		printf("%d ", *(num_array + i));

	printf("\n");

	return 0;
}
