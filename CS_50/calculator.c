#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

/* Haji Cheteh, Lutfi */

int main ()
{
	double result, no;
	char operation, end;
	
	end = 'y';
	while ((end == 'y') || (end == 'Y')) 
	{
		printf ("Calculator is on.\n Result = 0.0\n");
		scanf (" %c", &operation);
		result = 0.0;
		while ((operation != 'R') && (operation != 'r'))
		{	
			switch(operation)
			{
					case '+':
						scanf ("%lf", &no); fflush (stdin); result = result+no; printf ("Result+%.1lf=%.1lf\n", no, result); break;
				
					case '-':
						scanf ("%lf", &no); fflush (stdin); result = result-no; printf ("Result-%.1lf=%.1lf\n", no, result); break;

					case '*':
						scanf ("%lf", &no); fflush (stdin); result = result*no; printf ("Result*%.1lf=%.1lf\n", no, result); break;
						
					case '/':
						scanf ("%lf", &no); fflush (stdin); result = result/no; printf ("Result/%.1lf=%.1lf\n", no, result); break;
		
					default:
						printf ("%c is an unknown operator. Reeinput your line.\n", operation);
			}
			scanf("%c", &operation);
		}
		fflush (stdin);
		printf ("Do you want to continue? (Y/N) ");
		scanf ("%c", &end);
		fflush (stdin);
	}
	printf ("End of Program\n");
	system ("pause");

return 0;	
}