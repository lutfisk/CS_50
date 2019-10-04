#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* Haji Cheteh, Lutfi */

int main()
{
	int cg, ug;
	
	srand(time(NULL));
	
	printf("I am thinking of a number between 1-100\n")
    cg=rand()%100+1;
	printf("Guess it:\n");
	scanf("%d", &ug);
	while(ug !=cg)
	{
		if(ug>cg)
			printf("Try lower!\n");
		else if(ug<cg)
			printf("Try higher!\n");
		else
	
		printf("You guessed it!\n");
	scanf("%d", &ug);
	}
	
	
	for(i=0; i<10; i++)
	{
		printf("====>>%d\n", rand()%100+1);
	
	}
	
return 0;
}