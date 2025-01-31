// Bubble sort

#include <stdio.h>
#include <string.h>

void swap(int *x, int *y);
void print_array(int array_length, int array[]);

int main(void)
{
	int unsorted_array[10] = {10, 3, 5, 1, 2, 9, 4, 7, 6, 8};		// array to sort
	int array_length = sizeof(unsorted_array) / sizeof(unsorted_array[0]);	// get length of array


	for(int i = 0; i < array_length - 1; i++)
	{
		for(int j = 0; j < array_length - i - 1; j++)
		{
			if(unsorted_array[j] > unsorted_array[j + 1])
			{
				swap(&unsorted_array[j], &unsorted_array[j + 1]);
			}
		}
	}

	print_array(array_length, unsorted_array);

	return 0;
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}


void print_array(int array_length, int array[])
{
	for(int i = 0; i < array_length; i++)
		printf("%d ", array[i]);

	printf("\n");
}

