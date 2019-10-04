#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* HAJI CHETEH, LUTFI */

int main ()
{
	int ca=0, ce=0, ci=0, co=0, cu=0;
	int ch;
	
	while((ch=getchar())!=EOF)
	{
		switch(ch)
		{
			case 'A' : case 'a' : ca++; break;
			case 'E' : case 'e' : ce++; break;
			case 'I' : case 'i' : ci++; break;
			case 'O' : case 'o' : co++; break;
			case 'U' : case 'u' : cu++; break;
			default: ;
		}
	}
	printf("Count of a:%d\n", ca);
	printf("Count of e:%d\n", ce);
	printf("Count of i:%d\n", ci);
	printf("Count of o:%d\n", co);
	printf("Count of u:%d\n", cu);
	
return 0;	
}