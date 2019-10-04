#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

/* Haji Cheteh, Lutfi */

int main ()
{
	char name[30];
	char* q; 
	
	printf ("What is your name?\n");
	gets (name);
	q="Lisa"
	
	printf ("%s your name has %d characters.\n", name, strlen (name));
	
	if (strcmp (name, q)==0)
	{
		printf ("%s please call me now.\n", name);
	}
	else
	{
		printf ("%s please DO NOT call me. Ever.\n", name);
	}
	
return 0;	
}