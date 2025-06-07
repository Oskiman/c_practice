// Arrays of character strings
#include <stdio.h>

int main(void)
{
	const char *array[] = {"The quick brown fox", "jumped over", "the lazy dog"};

	printf("*array[0] outputs %c\n", *array[0]);	// *array[0] - first char of first element, "T"
	printf("array[0] outputs ");
	puts(array[0]);			// array[0] - first element, "The quick brown fox"
	printf("array[0][0] outputs %c\n", array[0][0]);	// array[0][0] same as *array[0]

	return 0;
}
