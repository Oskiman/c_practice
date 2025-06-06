// using calloc to create an array of ints
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num_elements = 0;
	int *array_pointer;

	printf("Enter number of elements: ");
	scanf("%d", &num_elements);

	// allocate memory for array
	array_pointer = (int*) calloc(num_elements, sizeof(int));

	// check (c)allocation, lol
	if(array_pointer == NULL)
	{
		printf("Nope!\n");
		return 1;
	}

	//output freshly calloc'd array
	for(int i = 0; i < num_elements; i++)
	{
		printf("%d ", array_pointer[i]);
	}
	printf("\n");

	// populate array
	for(int i = 0; i < num_elements; i++)
	{
		array_pointer[i] = i + 1;
	}

	// output populated array
	for(int i = 0; i < num_elements; i++)
	{
		printf("%d ", array_pointer[i]);
	}

	printf("\n");

	free(array_pointer);

	return 0;
}
