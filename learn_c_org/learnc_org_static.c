// Static exercise from learn-c.org
// Try to find the sum of some numbers by using the static keyword.
// Do not pass any variable representing the running total to the sum() function.
#include <stdio.h>

int sum(int x);

int main(void)
{
	printf("%d\n", sum(1));
	printf("%d\n", sum(2));
	printf("%d\n", sum(3));
	return 0;
}

int sum(int x)
{
	static int sum = 0;
	sum += x;
	return sum;
}
