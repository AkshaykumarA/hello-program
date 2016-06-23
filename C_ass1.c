#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int s, a, b, c, area;
	clrscr();

	printf("Enter the values of a,b and c\n");
	scanf ("%d %d %d", &a, &b, &c);

   /* compute s*/

   s = (a + b + c) / 2;

	area = sqrt ( s * (s-a) * (s-b) * (s-c));

	printf ("Area of a triangale = %d\n", area);
}

