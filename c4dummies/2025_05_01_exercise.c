// 2025/05/01 exercise
// Your challenge is to write a loop that outputs values 1 through 10. 
// After the first nine values are output, add a comma and a space. 
// The tenth value (10) is output followed by a newline.
// my code is denoyed by the "// mine" comments (I know, I need to come up with a better solution!)
#include <stdio.h>

int main()
{
    int x;

    for( x=1; x<11; x++ )
    {
	if(x == 10)	//mine
		printf("%d\n", x);	//mine
	else	//mine
        	printf("%d, ",x);
    }

    printf("\n");	//mine
    return 0;
}
