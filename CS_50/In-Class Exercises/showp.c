#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

/* Haji Cheteh, Lutfi */

int main ()
{
	int a,b;
	char ch, c;
	double d1, d2;
	int *   q, *   p;
	char *   pch;
	
	printf("Address of a:%p\n", &a);
	
	a=100;
	q=&a;
	p=q;
	
	printf("Address of q:%p\n", q);
	printf("Address of p:%p\n", p);
	
	*p= *q + a - *p + 5;
	
	printf("a=%d\n", *q);
	printf("a=%d\n", a);
	printf("a=%d\n", *p);
	
	
return 0;	
}