#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/* HAJI CHETEH, LUTFI*/

int main()
{
	int x,y,z,w;
	
	printf("Enter length of the rectangle:\n");
    scanf("%d", &x);
    printf("Enter width of the rectangle:\n");
	scanf("%d", &y);
	printf("Your rectangle has the length %d and the width %d.\n", x,y);
	
	z=x*y;
	w=(2*x)+(2*y);
	printf("Your rectangle's area is %d, and its perimeter is %d.\n", z,w);
	
	system ("pause");
	
return 0;
}
