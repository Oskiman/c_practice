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
		//printf("%d ", array_pointer[i]);
		printf("%d ", *(array_pointer + i));

	printf("\n");

	// reallocate array
	int *new_ptr;
	new_ptr = (int*)realloc(array_pointer, sizeof(int) * 2);	
	if(new_ptr == NULL)
	{
		printf("realloc failed!\n");
		return 1;
	}

	// output realloc'ed array
	

	// if realloc doesn't need to move data, we free the original memory
	if(!new_ptr)
	{
		free(array_pointer);
	}
	
	// realloc automatically frees the old pointer if it needs to move data
	// so we just need to free the realloc'ed memory
	free(new_ptr);

	return 0;
}
