#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* Haji Cheteh, Lutfi */

#define BLANK ' '

int main ()
{
	char first;
	char ch;
	
	printf("Enter your First and Last name:\n");
	
first=getchar();
    while((ch=getchar())!=' ');
	
	while ((ch=getchar())!='\n')
		printf("%c",ch);

	printf("%c%c%c\n", ',', BLANK, first);   
	
	return 0;	
}	