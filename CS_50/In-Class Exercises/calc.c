#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){
	char c;
	double a =0.0;
	double b;
	printf("calculator is on\nresult=0.0\n");
do{
	while(c!= 'r'){
		c = getchar();
		if(c == '+'){
		scanf("%lf",&b);
		a = a+b;
		printf("Result+%f =%f\n",b,a);
		}
		else if(c== '-'){
		scanf("%lf",&b);
		a = a-b;
		printf("Result-%f =%f\n",b,a);
		}
		else if(c== '*'){
		scanf("%lf",&b);
		a = a*b;
		printf("Result*%f =%f\n",b,a);
		}
		else if(c== '/'){
		scanf("%lf",&b);
		a = a/b;
		printf("Result/%f =%f\n",b,a);
		}
		else if((c=='r')||(c=='y')||(c=='\n')){
		}
		else {
			printf("%c is an Unknown operator reinput your line\n",c);
		}
	fflush(stdin);
	}
	a = 0.0;
	printf("do you want to continue? (y/n)");
	c = getchar();
}while (c!= 'n');
printf("End of Program");
return 0;
}
