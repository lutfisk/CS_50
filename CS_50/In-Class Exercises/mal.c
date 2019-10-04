#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

/* HAJI CHETEH, LUTFI */

int main ()
{
	int octa[10], i=0, j, k, quotient, deci, hex;
	
	printf("Enter a decimal integer:\n");
	scanf("%d",&deci);
	quotient=deci;
	while(quotient!=0)
	{
		octa[i]=quotient%8;
		quotient=quotient/8;
		i++;
	}
	k = i +1;
	octa[k]=0;
	for(j=i-1; j>=0; j--)
			
		octa[k]+=octa[j]*pow(10,j);
	
	printf("%d decimal is %d octal.\n",deci,octa[k]);
	getchar();
	
return 0;	
}	
