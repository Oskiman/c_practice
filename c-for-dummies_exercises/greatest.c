// C for dummies
// Your challenge for this month’s Exercise is to write a function, greatest(). 
// This function is fed three random values in the range of 2 to 25. 
// It returns the largest of these three values.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int greatest(int x, int y, int z);
int greatest_ternary(int x, int y, int z);

int main(void)
{
	int count = 3;
	int min = 2;
	int max = 25;
	int rand1, rand2, rand3;
	srand((unsigned int)time(NULL));
	
    	rand1 = rand() % (max - min + 1) + min;	
    	rand2 = rand() % (max - min + 1) + min;		
    	rand3 = rand() % (max - min + 1) + min;

	printf("The greatest of %d, %d and %d is %d.\n", rand1, rand2, rand3, greatest(rand1, rand2, rand3));	
	printf("The greatest of %d, %d and %d is %d.\n", rand1, rand2, rand3, greatest_ternary(rand1, rand2, rand3));

	return 0;
}

int greatest(int x, int y, int z)
{
	if(x > y && x > z)
		return x;
	else if(y > z && y > x)
		return y;
	else
		return z;

}

int greatest_ternary(int x, int y, int z)
{
	return (x > y && x > z) ? x: (y > z && y > x) ? y: z;
}
