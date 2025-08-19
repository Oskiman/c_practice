#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	const char* symbols[] = { "£", "$", "%", "&", "*", "+"};
	const int num_symbols = sizeof(symbols) / sizeof(symbols[0]);		// size of symbols[]
	char choice;							// another go?

	srand((unsigned int) time(NULL));				// randomise

	do{
		int reel1 = rand() % num_symbols;
		int reel2 = rand() % num_symbols;
		int reel3 = rand() % num_symbols;

		printf("%s %s %s\n", symbols[reel1], symbols[reel2], symbols[reel3]);

		// check for any win
		if(reel1 == reel2 && reel2 == reel3)	// jackpot
			printf("Jackpot!\n");
		else if(reel1 == reel2 || reel2 == reel3 || reel3 == reel1)	// 2 out of 3
			printf("You matched 2 of 3!\n");
		else
			printf("Sorry, not this time\n");

		printf("Spin again(y/n): ");
		scanf(" %c", &choice);

	}while(choice == 'y' || choice == 'Y');

	printf("Thanks for playing. Bye!\n");

	return 0;
}
