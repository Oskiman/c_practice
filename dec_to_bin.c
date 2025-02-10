// converts a decimal number to binary

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input;
	printf("Enter an integer: ");	// assume valid input
	scanf("%d", &input);

	char* bin_array = (char*) malloc(32 * sizeof(char));
	int quotient = input;	// keep original input (why? I don't know)
	int divisor = 2;
	int remainder = 0;
	int count = 1;

	while(quotient != 0)	
	{
		remainder = quotient % divisor;
		bin_array[count++] = remainder;
		quotient /= divisor;
	}
	bin_array[count] = '\0';

	// output array in reverse order
	int array_length = sizeof(bin_array) / sizeof(bin_array[0]);
	for(int i = array_length; i > 0; i--)
	{
		printf("%d ", bin_array[i]);
	}
	printf("\n");

	return 0;
}
