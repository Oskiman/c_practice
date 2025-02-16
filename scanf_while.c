// while loop uses input from scanf as exit condition
// will continue as long as integer is entered

#include <stdio.h>

int main(void)
{
	printf("Enter an integer: ");
	int num = 0;
	while(scanf("%d", &num) == 1)
	{
		printf("%d\n", num);
	}

	return 0;
}
