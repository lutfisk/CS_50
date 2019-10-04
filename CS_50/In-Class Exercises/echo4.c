#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/* HAJI CHETEH, LUTFI*/

int main()
{
	printf("Write down a statement:")
	
	     char ch; int count=0;
	     ch=getchar();
	
	while(ch!='\n')
		 {
			 if(ch=='k')
				 count++;
			 putchar(ch);
			 ch=getchar();
		 }
	     putchar('\n');
	     printf("Total k's are:%d\n", count);
	

    return 0;	
}
