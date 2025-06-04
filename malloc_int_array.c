// using malloc to create an array of integers
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num_elements;
	int *array_pointer;
	printf("Enter number of integer elements: ");
	scanf("%d", &num_elements);

	// allocate enough memory for array
	//array_pointer = (int*)malloc(num_elements * sizeof(int));
	// apparently casting return value of malloc is a no-no unless you want C++ compatability
	// also good practice to use the pointer contents as size
	// in case the type is changed at some point
	array_pointer = malloc(num_elements * sizeof(*array_pointer));
	// check we have enough memory
	if(array_pointer == NULL)
	{
		printf("Memory allocation failed!\n");
		return 1;
	}

	// populate array
	for(int i = 0; i < num_elements; i++)
	{
		array_pointer[i] = i + 1;	// so we don't start at 0, just because it looks nicer ;)
	}

	// output array
	for(int i = 0; i < num_elements; i++)
	{
		printf("%d ", array_pointer[i]);
	}
	printf("\n");
	
	free(array_pointer);

	return 0;
}
