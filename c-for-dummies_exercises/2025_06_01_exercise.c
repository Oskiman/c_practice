// C for Dummies exercise 2025_06_01
// Write a program that translates values from base 10 to another base
// Prompt for a base then for a value in decimal
// NOTE: not yet finished, TODO: loads!

#include <stdio.h>

int main(void)
{
	int base = 0;
	int value = 0;

	// make sure input is within limits
	while(base <= 1 || base >= 11)
	{
		printf("Enter base (>1 <11): ");
		scanf("%d", &base);
	}

	printf("Enter value (>1): ");
	scanf("%d", &value);
	
	//while(value % base != 0)
	//{
		//printf("%d", value / base);
		//value /= base;
		//printf("%d\n", value);
		//if((value /= base) == 0)
		//	printf("%d", value % base);
	//	if(value % base == 0)
	//		printf("%d", value % base);
	//}
	while(value > base)
	{
		value /= base;
		printf("%d", value / base);
		printf("%d", value % base);
	}

	printf("%d", value % base);
	printf("\n");

	return 0;
}
