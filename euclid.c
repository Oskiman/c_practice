#include <stdio.h>

int euclid(int x, int y);
int euclid_rec(int x, int y);

int main(void)
{
	int num1 = 0, num2 = 0, largest = 0, smallest = 0;
	printf("Enter two different integers separated by a space: ");		// assume valid input
	scanf("%d %d", &num1, &num2);
	if(num1 > num2)
	{
		printf("The greatest common factor of %d & %d is %d\n", num1, num2, euclid(num1, num2));
		printf("The greatest common factor of %d & %d is %d\n", num1, num2, euclid_rec(num1, num2));
	}
	else
	{
		printf("The greatest common factor of %d & %d is %d\n", num2, num1, euclid(num2, num1));
		printf("The greatest common factor of %d & %d is %d\n", num2, num1, euclid_rec(num2, num1));
	}

	return 0;
}

// how I did it
int euclid(int x, int y)
{
	int remainder = -1;	// arbitrary value so we enter while loop
	while(remainder != 0)
	{	
		remainder = x % y;
		if(remainder == 0)
		{
			return y;
		}
		else
		{
			x = y;
			y = remainder;
		}
	}
}

// how it should be done!
// I cannot find/remember the source of this
int euclid_rec(int x, int y)
{
	if(x == 0)
		return y;

	return euclid_rec(y % x, x);
}


