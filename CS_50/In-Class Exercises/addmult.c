#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

/* Haji Cheteh, Lutfi */

void addANDmult (int x, int y, int* s, int* m);

int main ()
{
	int a, b, sum, mult;
	a=10; b=20; sum=0; mult=0;
	
	addANDmult (a,b,&sum,&mult);
	
	printf ("%d + %d = %d, %d x %d = %d\n ", a, b, sum, a, b, mult);
	
return 0;	
}

void addANDmult (int x, int y, int* s, int* m)
{
	*s = x + y;
	*m = x * y;
}