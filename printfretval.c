// output printf return value

#include <stdio.h>

int main(void)
{
	int retval = 0;
	retval = printf("Hello World!\n");
	printf("%d\n", retval);

	char input[20];
	printf("Enter a word: ");
	fgets(input, 19, stdin);
	retval = printf("%s", input);
	printf("%d\n", retval);

	return 0;
}
