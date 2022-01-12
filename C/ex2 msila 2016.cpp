#include <stdio.h>
int main ()
{
int A,B,C,mx;
printf("Entrez A:");
scanf("%d",&A);	
printf("Entrez B:");
scanf("%d",&B);	
printf("Entrez C:");
scanf("%d",&C);	

if  ((A>B)&&(A>C)){A=mx;}
else if ((B>A)&&(B>C)) {B=mx;}
else {
C=mx;}
printf("Max egale=%d",mx);	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
