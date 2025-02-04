// code to illustrate problems with calling scanf & gets
// in the same program
// from c-faq.com


#include <stdio.h>

int main()
{
	int i;
	char string[80];
	printf("enter an integer: \n");
	scanf("%d", &i);
	printf("enter a string: \n");
	gets(string);
	printf("You typed %d and \"%s\"\n", i, string);

	return 0;
}
