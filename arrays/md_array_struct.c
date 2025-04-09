// multi dimensional arrays of structs
#include <stdio.h>

typedef struct test_t{
	int x;
	int y;
	int z;
}test_t;

int main(void)
{
	// create & populate an array of 3 structs
	test_t numbers[3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	// using dot operator
	printf("numbers[0]\n");
	printf("%d %d %d\n", numbers[0].x, numbers[0].y, numbers[0].z);

	// using pointer notation
	printf("numbers[1]\n");
	printf("%d %d %d\n", (numbers + 1)->x, (numbers + 1)->y, (numbers + 1)->z);
	return 0;
}
