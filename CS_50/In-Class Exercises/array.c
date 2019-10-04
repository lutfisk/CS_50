#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

/* Haji Cheteh, Lutfi */

void fillArray (int* x, int n);
void printArray (int* x, int n);

int main ()
{
	int a[5];
	int b[20];
	
	printf (" %d \n", a==&a[0]);
	
	fillArray(a, 5);
	printArray(a, 5);
	
	fillArray(b, 20);
	printArray (b, 20);	

return 0;	
}

void printArray(int* x, int n)
{
	int i;
		for (i=0; i<n; i++)
	{
		printf ("===>> %d\n", x[i]);
	}
}

void fillArray (int* x, int n)
{
	int i;
		for(i=0; i<n; i++)
	{
		printf ("Enter numbers:\n");
		scanf ("%d", &x[i]);
	}	
}