#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

/* Haji Cheteh, Lutfi */

void clear (void);

int main ()
{
	int num;
	char input, output, d, o, h, q, end;
	
	end = 'y';
	
	while ((end == 'y') || (end == 'Y'))
	{
		printf ("Base of input (d=decimal, h=hexadecimal, o=octal):\n");
		scanf ("%c", &input);
		
		clear ();
		
		printf ("Number:\n");
		if (input == 'd')
		{
			scanf ("%d", &num);
		}
		else if (input == 'h')
		{
			scanf ("%x", &num);
		}
		else if (input == 'o')
		{
			scanf ("%o", &num);
		}
		
		clear ();
		
		printf ("Base of output (d=decimal, h=hexadecimal, o=octal):\n");
		scanf ("%c", &output);
		
		if ((output == 'd') && (input == 'h'))
		{
			printf ("The integer %x in hexadecimal is equivalent to %d in decimal.\n", num, num);
		}
		else if ((output == 'd') && (input == 'o'))
		{
			printf ("The integer %o in octal is equivalent to %d in decimal.\n", num, num);
		}
		else if ((output == 'h') && (input == 'd'))
		{
			printf ("The integer %d in decimal is equivalent to %x in hexadecimal.\n", num, num);
		}
		else if ((output == 'h') && (input == 'o'))
		{
			printf ("The integer %o in octal is equivalent to %x in hexadecimal.\n", num, num);
		}
		else if ((output == 'o') && (input == 'd'))
		{
			printf ("The integer %d in decimal is equivalent to %o in octal.\n", num, num);
		}
		else if ((output == 'o') && (input == 'h'))
		{
			printf ("The integer %x in hexadecimal is equivalent to %o in octal.\n", num, num);
		}	
		fflush (stdin);
		printf ("Another Number? (Y/N) ");
		scanf ("%c", &end);
		fflush (stdin);
	}	
	printf ("Goodbye!\n");
	system ("pause");
	
return 0;	
}

void clear (void)
{  
  while ( getchar() != '\n' );
}