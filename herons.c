// Use Herons formula to calcuate the area of a triangle
// given the length of each side
// Ensure valid lengths are input using triangle inequality:
// the sum of the lengths of any two sides must be greater
// than or equal to the third side

#include <stdio.h>
#include <math.h>

int main(void)
{
	float a = 0.0, b = 0.0, c = 0.0;	// lengths of triangle sides
	int valid_lengths_flag = 0;	// will change to 1 if valid

	while(valid_lengths_flag == 0)
	{
		printf("Input the length of side A: ");
		scanf("%f", &a);
		printf("Input the length of side B: ");
		scanf("%f", &b);
		printf("Enter the length of side C: ");
		scanf("%f", &c);

		if((a + b < c) || (a + c < b) || (b + c < a) || (c + a < b))
		{
			printf("Invalid lengths\n");
		}
		else
		{
			valid_lengths_flag = 1;	
		}
	}

	// calculate semi perimeter
	float semi_p = (a + b + c) / 2;

	// herons formula
	float area_triangle = sqrt(semi_p * (semi_p - a) * (semi_p - b) * (semi_p - c));

	printf("Semi perimiter is %.2f\n", semi_p);
	printf("Area of triangle is %.2f\n", area_triangle);

	return 0;
}


