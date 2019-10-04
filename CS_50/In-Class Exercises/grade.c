#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct xrec
{
   char name[11];
   char ssn [12];
   char g;
   double hw,q,m,f;
   char grade;
   };
    void printStudent(struct xrec *     a, int n);
    void computeGrade(struct xrec *     a, int n);
    void printGrade(struct xrec *     a, int n);
   int main()
   {
      struct xrec temp;
	  struct xrec x[50];
	  int size=0;
	  FILE * infile;
	  
	  infile=fopen("data.txt","r");
	  if(infile==NULL)
	  {
	    printf("File does not work\n");
		exit(0);
	  }
	  while(fscanf(infile,"%10s %11s %c %lf %lf %lf %lf"
            ,temp.name,temp.ssn,&temp.g,&temp.hw,
             &temp.q,&temp.m,&temp.f)!=EOF)
      {
       temp.name[10]='\0'; temp.ssn[11]='\0';
	   x[size++]=temp;
	   }
	 
	   
	   return 0;
	   }
	   void computeGrade(struct xrec *     a, int n)
	   { int i;double total;
		 for(i=0 ; i < n; i++)
		 {
		   total=a[i].hw *.40+a[i].q * .15+10+a[i].m*.15+a[i].f* .20;
		   switch( (int)total/10)
		   {
		     case 10 : case 9 : a[i].grade='A';break;
			 case 8 : a[i].grade='B';break;
			 case 7 : a[i].grade='C';break;
			 default : a[i].grade='C';break;
			}
			}
			}
		   
	   
	   
	   
	   
	
	   
	   void printGrade(struct xrec *     a, int n)
	   { int i;
		 for(i=0 ; i < n; i++)
	     printf("%-10s Your final grade is %c\n",a[i].name,
		 a[i].grade);
	   
	   }
	   void printStudent(struct xrec *     a, int n)
	   {
	     int i;
		 for(i=0 ; i < n; i++)
		 printf("%-10s %-11s %c %f %f %f %f\n",a[i].name,
		 a[i].ssn,a[i].g,a[i].hw,a[i].q,a[i].m,a[i].f);
		 }
		 
		 
		 
		 
		 
      	  
	   
	   
	   
	   
	   
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
   
   
   
   
   
   
   
   
   
   
   