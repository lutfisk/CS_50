#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* HAJI CHETEH, LUTFI */

int main ()
{
	int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, dice;
	int i;
	srand(time(NULL));
	
	for (i=0; i<100; i++)
	{
		dice=rand()%(6-1+1)+1;
		if(dice==1)
		{
			n1++;
		}
		else if (dice==2)
		{
			n2++;
		}
		else if (dice==3)
		{
			n3++;
		}
		else if (dice==4)
		{
			n4++;
		}
		else if (dice==5)
		{
			n5++;
		}
		else
		{
			n6++;
		}
	}
	printf ("Occurrence of 1's are: %d\n", n1);
	printf ("Occurrence of 2's are: %d\n", n2);
	printf ("Occurrence of 3's are: %d\n", n3);
	printf ("Occurrence of 4's are: %d\n", n4);
	printf ("Occurrence of 5's are: %d\n", n5);
	printf ("Occurrence of 6's are: %d\n", n6);
	
return 0;	
}