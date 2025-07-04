// reverse a string

#include <stdio.h>
#include <string.h>

int main(void)
{
	char phrase[] = "Hello World!";
	puts(phrase);

	char* phr_ptr;	// to traverse phrase
	
	phr_ptr = phrase + strlen(phrase);	// set pointer to end of phrase
	
	while(--phr_ptr >= phrase)		// while not at start, decrement
		printf("%c", *phr_ptr);

	printf("\n");

return 0;
}
