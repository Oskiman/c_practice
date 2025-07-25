// rudimentary binary search
// if number is in list, function returns it's position
// else function returns -1
#include <stdio.h>

int bin_search(int array[], int size, int target);

int main(void)
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int input;
	int result;

	printf("Enter an integer: ");
	scanf("%d", &input);

	result = bin_search(array, 10, input);
	if(result == -1)
		printf("Number not in list\n");
	else
		printf("%d is at position %d in the list\n", input, result);
	return 0;
}

int bin_search(int array[], int size, int target)
{
	int high = size;
	int low = 0;
	int guess;
	int mid;

	while(low <= high)
	{
	mid = (low + high) / 2;
	guess = array[mid];
	if(guess == target)	// found it!
		return mid;
	if(guess < target)
		low = mid + 1;	// too low, change low to 1 past mid
	else
		high = mid - 1;	// too high, change high
	}

	return -1;	// number is not in list
}
