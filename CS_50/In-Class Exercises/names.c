#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

/* Haji Cheteh, Lutfi */

void printNames (char** x, int n);

int main ()
{
	char* names[5];
	char x[30];
	int i, size;
	
	for (i=0; i <5; i++)
	{
		printf ("Name?\n");
		getString (x);
		size = strlen (x);
		names[i] = malloc(sizeof(char)*(size+1));
		strcpy (names[i], x);
	}
	for (i=0; i<5; i++)
	{
		printNames (names, 5);
	}
	
return 0;	
}

void printNames (char** x, int n)
{
	int i;
	for (i=0, i < n, i++)
		printf ("==>%s", x);
}