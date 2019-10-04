#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include "mylib.h"

/* Haji Cheteh, Lutfi */

int main ()
{
	FILE* infile;
	FILE* outfile;
	char infilename[50];
	char outfilename[50];
	int c;
	
	printf ("Copy from:\n");
	scanf ("%s", infilename);
	printf ("Copy to:\n");
	scanf ("%s", outfilename);
	
	infile = fopen (infilename, "r"); /*if not found, add the directory ( "r" for "read" ) */
	if (infile == NULL)
	{
		printf ("File not found.\n");
		exit (0);
	}
	
	outfile = fopen (outfilename, "w"); /* ( "w" for write ) */
	
	while ((c = fgetc (infile)) != EOF)
	{
		fputc (c, outfile);
	}
	
	fclose (infile); fclose (outfile);
	printf ("Copying is done..\n");
	
return 0;	
}