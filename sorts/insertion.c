// insertion sort
#include <stdio.h>

void swap(int* x, int* y);
void print_sorted(int array[], int array_size);

int main(void)
{
	int unsorted[] = {4, 3, 7, 6, 1, 8, 9, 2, 5};
	int array_length = sizeof(unsorted) / sizeof(unsorted[0]);	// get length of array

	for(int i = 1; i < array_length; i++)	// start at 1 because first element[0] is classed as fully sorted
	{
		int sort = unsorted[i];		// initilaise to second element in array (first that needs sorting)
		int j = i - 1;			// previous element to above
		
		while(j >= 0 && unsorted[j] > sort)
		{
			unsorted[j + 1] = unsorted[j];	// swap elements
			j = j - 1;
		}
		unsorted[j + 1] = sort;		// move to next element
	}

	print_sorted(unsorted, array_length);	// output sorted array

	return 0;
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

}

void print_sorted(int array[], int array_size)
{
	for(int i = 0; i < array_size; i++)
		printf("%d ", array[i]);
	
	printf("\n");
}
