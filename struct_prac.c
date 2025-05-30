#include <stdio.h>

typedef struct point{
	int x;
	int y;
} point;

int main(void)
{
	point p;
	p.x = 100;
	p.y = 100;

	printf("%d\n", p.x);
	printf("%d\n", p.y);

	char keypress;

	while(1)
	{
		scanf("%c", &keypress);
		
		switch(keypress)
		{
			case 'w':
			p.x += 10;
			break;

			case 's':
			p.x -= 10;
			break;

			case 'a':
			p.y += 10;
			break;

			case 'd':
			p.y -= 10;
			break;

			default:
			break;
		}

		printf("%d\n", p.x);
		printf("%d\n", p.y);
	}

	return 0;
}
