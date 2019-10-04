#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

/* Haji Cheteh, Lutfi */

void fillRandom (double* a, int n);
void printArray (double* a, int n);
double sumArray (double* a, int n);

int main ()
{
	double x[200];
	double y[50];
	
	srand (time(NULL));
	
	fillRandom (x, 200);
	printArray (x, 200);
	
	printf ("Total value in array x is %f\n", sumArray (x, 200));
	
	fillRandom (y, 50);
	printArray (y, 50);
	
	printf ("Total value in array y is %f\n", sumArray (y, 50));
	
return 0;	
}

void fillRandom (double* a, int n)
{
	int i;
	for (i=0; i < n; i++)
		a[i] = rand() % (99-10 + 1) + 10;
}

void printArray (double* a, int n)
{
	int i;
	for (i=0; i < n; i++)
	{
		printf ("%5.2f", a[i]);
		if ((i+1)%5==0)
			printf ("\n");
	}
}	

double sumArray (double* a, int n)
{
		int i; double sum=0.0;
	for (i=0; i < n; i++)
		sum+=a[i];
	
return sum;	
}