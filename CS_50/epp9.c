#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* Haji Cheteh, Lutfi */

#define TRUE 1
#define FALSE 0

int main ()
{
	int correct, inputint;
	
	inputint = -1;
	correct = FALSE;
	
	while (!correct)
	{
		if ((0<inputint) && (inputint<20))
		{
			printf("Thank you.\n");
			correct = TRUE;
		}
		else
		{
			printf ("Enter an integer between 0 and 20:\n");
			scanf ("%d", &inputint);
			if (0>=inputint)
			{
				printf ("The number is too low.\n");
			}
			else if (inputint>=20)
			{
				printf ("The number is too high.\n");
			}
		}
	}
return 0;	
}