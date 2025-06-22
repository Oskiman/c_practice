// pointer to a struct
#include <stdio.h>

typedef struct{
	int x;
	int y;
	int z;
}test;

int main(void)
{
	// use dot(.) operator
	test t1 = {1, 2, 3};
	printf("x: %d\n", t1.x);

	// use arrow (->) operator
	test *ptr_to_t1 = &t1;
	printf("y: %d\n", ptr_to_t1->y);

	// use dereference(*) and dot(.) operators
	// note: dot(.) operator has higher precedence so we use parens
	printf("z: %d\n", (*ptr_to_t1).z);

	return 0;
}
