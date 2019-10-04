#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main ()
{

   int q,d,n,p;
   
   printf("Enter pennies:");
   scanf("%d", &p);
   
   q=p/25;
   p=p-q*25;
   d=p/10;
   p=p%10;
   n=p/5;
   p=p%5;

   printf("Q=%d\nD=%d\nN=%d\nP=%d\n", q,d,n,p);
   
return 0;
}