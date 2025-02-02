// output printf return value

#include <stdio.h>

int main(void)
{
	int retval = 0;
	retval = printf("Hello World!\n");
	printf("%d\n", retval);

	char input[20];			// size is arbitrary
	printf("Enter a word: ");
	fgets(input, 19, stdin);	// leave space for the '\0'
	retval = printf("%s", input);
	printf("%d\n", retval);

	return 0;
}
