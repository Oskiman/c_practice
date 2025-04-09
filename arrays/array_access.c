// accessing array elements using different methods
#include <stdio.h>

int main(void)
{
	int num_array[5] = {1, 2, 3, 4 ,5};

	// using array notation
	printf("num_array[1] = %d\n", num_array[1]);

	// using pointer notation
	printf("*(num_array + 1) = %d\n", *(num_array + 1));

	
	return 0;
}
