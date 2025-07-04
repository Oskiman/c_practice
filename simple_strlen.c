// simple strlen
#include <stdio.h>

int simple_strlen(char* ptr);

int main(void)
{
	char phrase[] = "Hello World!";
	printf("phrase[] has a length of %d\n", simple_strlen(phrase));

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
