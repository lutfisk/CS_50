#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include "mylib.h"

/* Haji Cheteh, Lutfi */

struct xrec
{
	char make[20];
	double price;
	int year;
	char vinNum[30];
};

typedef struct xrec Car; /* Name the struct xrec - Car */

void printCar (Car x);

int main ()
{
	struct xrec c1, c2, c3;
	Car* q;
	
	c1.price = 45000;
	strcpy (c1.make, "BMW");
	c1.year = 2015;
	strcpy (c1.vinNum, "BMWJK1U82");
	q = &c1;
	q->price = 35000;
	
	c2 = c1;
	printCar (c2);
	
return 0;	
}

void printCar (Car x)
{
	printf ("Make: %s\n", x.make);
	printf ("Price: %f\n", x.price);
	printf ("Year: %d\n", x.year);
	printf ("VinNumber: %s\n", x.vinNum);
}