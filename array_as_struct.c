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

int main(void)
{
	

	return 0;
}

void IterateItems(Int32Array array)
{
	for(int i = 0; i < array.length; i++)
	{
		//iterate
	}

}
