// 2025_03_01_exercise.c
// From the c for dummies website
// Your challenge is to modify the code presented to have the strstr() function continue to search the given string. 
// Remember, the value the function returns is an offset (pointer) into the string where the first match is found. 
// It’s possible to call the function a second time to continue the search
// I had to look at the solution for this one!
#include <stdio.h>
#include <string.h>

int main(void)
{
	char phrase[] = "Was this the face that launch'd a thousand ships, and burnt the topless towers of Ilium?";
	char find[] = "the";
	char *found;

	puts(phrase);
	found = strstr(phrase, find);
	if(found == NULL)
		printf("String '%s' not found\n", find);
	else
	{
		printf("Found '%s' at offset %d.\n", find, (int)(found-phrase));
		do
		{
			found = strstr(found + 1, find);	// the bit I couldn't figure out!
			if(found != NULL)
				printf("Found '%s' at offset %d.\n", find, (int)(found-phrase));
		} while(found != NULL);
	}

	return 0;
}
