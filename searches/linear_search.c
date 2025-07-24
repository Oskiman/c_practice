// a rudimentary linear search on an array of integers
// if number is in array, function returns it's position
// else function returns -1
#include <stdio.h>

int lin_search(int array[], int size, int target);

int main(void)
{
	int array[] = {1, 2, 3, 4, 5 ,6, 7, 8, 9, 10};
	int input;
	int result;
	printf("Enter an integer: ");
	scanf("%d", &input);
	result = lin_search(array, 10, input);

	if(result == -1)
	{
		printf("Number not in list.\n");
	}
	else
	{
		printf("Number at position %d in list.\n", result);
	}
	return 0;
}

int lin_search(int array[], int size, int target)
{
	for(int i = 0; i < size; i++)
	{
		if(array[i] == target)
			return i;
	}
	
	return -1;
}
