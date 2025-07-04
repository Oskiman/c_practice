// simple strlen
#include <stdio.h>

int simple_strlen(char* ptr);

int main(void)
{
	char phrase[] = "Hello World!";
	printf("phrase[] has a length of %d characters.\n", simple_strlen(phrase));

	char input_phrase[100];	// arbitrary length, I know it's not ideal, it'll do for now
	printf("Enter a phrase: ");
	fgets(input_phrase, sizeof(input_phrase), stdin);	// need to -1 for correct size
	printf("Your input has a length of %d characters.\n", simple_strlen(input_phrase));

	return 0;
}

int simple_strlen(char* ptr)
{
	int length = 0;
	while(*ptr != '\0')
	{
		length++;
		ptr++;
	}

	return length;
}
