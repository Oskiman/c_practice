// Bubble sort
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void bubble_sort(int array[], int array_length);
void swap(int *x, int *y);
void print_array(int array_length, int array[]);

int main(void)
{
	int unsorted_array[10] = {10, 3, 5, 1, 2, 9, 4, 7, 6, 8};		// array to sort
	int array_length = sizeof(unsorted_array) / sizeof(unsorted_array[0]);	// get length of array
	bubble_sort(unsorted_array, array_length);
	print_array(array_length, unsorted_array);

	return 0;
}

void bubble_sort(int array[], int array_length)
{
	bool swapped = false;		// if array is fully sorted, we can end early
	int i = 0;
	do{
		swapped = false;	// set to false for every pass
		for(int j = 0; j < (array_length - i - 1); j++) // after each pass, highest value will be in correct place
		{						// with -i we reduce the length of the search by 1 each pass
			if(array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;		// we have swapped 2 numbers this pass
			}
		}
	i++;
	}while(swapped); // continue as long as we swap numbers each pass
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

