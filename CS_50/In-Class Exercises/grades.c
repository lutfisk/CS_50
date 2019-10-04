#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include "mylib.h"

/* Haji Cheteh, Lutfi */

char getgrade (double* a);

int main ()
{
	FILE* infile;
	FILE* outfile;
	char name [10];
	char ssn;
	double t[5];
	
	
	infile = fopen ("data.txt","r");
	if (infile == NULL)
	{
		printf ("Not found.\n");
		system ("pause");
		exit (0);
	}
	outfile = fopen ("result.txt", "w");
	
	while (fscanf (infile, "%10s %c %lf %lf %lf %lf %lf", &name, &ssn, &t[0], &t[1], &t[2], &t[3], &t[4]) != EOF)
	{
		name [10] = '\0';
		fprintf (outfile, "%s %s your grade is %c.\n", ssn, name, getgrade (t));
	}
	
	fclose (infile); fclose (outfile);

return 0;	
}	

char getgrade (double* a)
{
	double ave; char g;
	ave = ((0.15*a[0])+(0.15*a[1])+(0.4*a[2])+(0.1*a[3])+(0.2*a[4]));
	switch ((int)ave/10)
	{
		case 10: case 9: g = 'A'; break;
		case 8: g = 'B'; break;
		case 7: g = 'C'; break;
		case 6: g = 'D'; break;
		case 5: case 4: case 3: case 2: case 1: case 0: g = 'F'; break;
		default:;
	}
return g;	
}