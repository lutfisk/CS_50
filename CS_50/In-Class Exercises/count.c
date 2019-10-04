#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* HAJI CHETEH, LUTFI */

int main ()
{
	int ch;
	int lc=0, uc=0, ws=0, dc=0;
	
	printf ("Enter phrase!\n");
	
	while ((ch=getchar())!=EOF)
	{
		if ((ch==' ')||(ch=='\t')||(ch=='\n'))
		{
			ws++;putchar(ch);
		}
		else if (ch>='A' && ch<='Z')
		{
			uc++;putchar(ch);
		}
		else if (ch>='a' && ch<='z')
		{
			lc++;putchar(ch-32);
		}
		else if (ch>='0' && ch<='9')
		{
			dc++; putchar(ch);
		}
		else
		{
			putchar(ch);
		}
	}	
	printf("ws=%d, Upper Case:%d, Lower Case:%d, Digits:%d\n", ws,uc,lc,dc);
	
return 0;	
}