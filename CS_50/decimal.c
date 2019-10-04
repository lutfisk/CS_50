#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

/* Haji Cheteh, Lutfi */

int main ()
{
	int deci;
	
	printf ("Enter a decimal integer:\n");
	scanf ("%d", &deci);
	
	printf ("%d decimal is %o octal and %x hexadecimal.\n", deci, deci, deci);
	
	
return 0;
}