#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include "mylib.h"

/* Haji Cheteh, Lutfi */

int main ()
{
	double* x;
	int num;
	
	printf ("How many location?\n");
	scanf ("%d", &num);
	
	x = malloc (sizeof (double)*num);
	
	fillRandom (x, num);
	printArray (x, num);
	/* x=NULL; */
	
return 0;	
}