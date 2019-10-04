#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

/* Haji Cheteh, Lutfi */

int addarray (int* a, int n);

int main ()
{
	int array1 [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		array2 [4] = {0, 0, 0, 0};
		
	/* (array1 + 10)
		(array2 + 4) */
	
	printf ("The sum of the elements in array1 is %d.\n", addarray (array1, 10));
	printf ("The sum of the elements in array2 is %d.\n", addarray (array2, 4));
	
return 0;	
}

int addarray (int* a, int n)
{
			int i; int sum=0;
	for (i=0; i < n; i++)
		sum+=a[i];
	
return sum;
}