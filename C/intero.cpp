#include <stdio.h>
int main()
{
int a,b;
printf("Donnez le premier nombre : A=");
scanf("%d",&a);
printf("\n\n\n");
printf("Donnez le dexieme nombre : B=");
scanf("%d",&b);			
printf("\n\n\n");
if (a<b)
{	
printf("A est inferieur :(A<B)");
}
else if (b<a)	
{
printf("B est inferieur :(A>B)");		
}
else
printf ("Les nombre sont egaus (A=B)");

printf("\n\n\n");	
printf("Merci \n\n\n");	
	
	
return 0;	
}
