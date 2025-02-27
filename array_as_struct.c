// array defined in a struct
// code from "Tips for C Programming", approx 21:25, Nic Barker, Youtube
#include <stdio.h>
#include <stdint.h>

typedef struct{
	int32_t* items;		// pointer to first element
	int32_t length;		// at least current length
	int32_t capacity;	// total capacity
}Int32Array;

void IterateItems(Int32Array array);
int Int32Array_Get(Int32Array array, int32_t index);

int main(void)
{
	

	return 0;
}

void IterateItems(Int32Array array)
{
	for(int i = 0; i <= array.length; i++)
	{
		int item = Int32Array_Get(array, i);
	}

}


// function for bounds checking of array, called by IterateItems() 
int Int32Array_Get(Int32Array array, int32_t index)
{
	if(index >= 0 && index < array.length)
	{
		return array.items[index];
	}

	return 0;

}
