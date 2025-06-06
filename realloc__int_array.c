// using realloc on an int array
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num_elements = 0;
	printf("Enter number of elements: ");
	scanf("%d", &num_elements);

	// use calloc to create a 0 initialised array
	int *array_pointer = (int*)calloc(num_elements, sizeof(int));

	// check we have memory
	if(array_pointer == NULL)
	{
		printf("Allocation failed!\n");
		return 1;
	}

	// populate array
	for(int i = 0; i < num_elements; i++)
		array_pointer[i] = i;

	// output array
	for(int i = 0; i < num_elements; i++)
		//printf("%d ", array_pointer[i]);	// experimenting with output, will find out which, if any, is more correct
		printf("%d ", *(array_pointer + i));

	printf("\n");

	// reallocate array
	int *new_ptr;
	new_ptr = (int*)realloc(array_pointer, sizeof(int) * (num_elements * 2));	// make array twice the size (I think!)	
	if(new_ptr == NULL)
	{
		printf("realloc failed!\n");
		return 1;
	}

	// assign values to the realloc'ed elements
	for(int i = num_elements; i < num_elements * 2; i++)
	{
		new_ptr[i] = i;
	}

	// output realloc'ed array
	for(int i = 0; i < num_elements * 2; i++)
		printf("%d ", *(new_ptr + i));

	printf("\n");

	// if realloc doesn't need to move data, or fails, we free the original memory
	if(!new_ptr)
	{
		free(array_pointer);
	}
	
	// realloc automatically frees the old pointer if it works
	// so we just need to free the realloc'ed memory
	free(new_ptr);

	return 0;
}
