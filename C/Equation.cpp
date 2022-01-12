#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,delta,x,x1,x2;
int z;
delta=(b*b-(4*a*c));
printf("Donnez a:");
scanf("%f",&a);
printf("Donnez b:");
scanf("%f",&b);
printf("Donnez c:");
scanf("%f",&c);
if(delta=0){z=1;}
else if(delta>=0){z=2;}	
else {z=0;}
switch(z) {

		case(1):
			x=-b/2*a;
			printf("x=-%.2f/2*%.2f",x,b,a);
		break;
	
		
		case(2):
			x1=(((-b)-(sqrt(delta)))/(2*a));		
			x2=(((-b)+(sqrt(delta)))/(2*a));
			printf("Cette equation a deux solutions :\n\n");
			printf("\t1- x1=%.2f\n",x1);
			printf("\t2- x2=%.2f",x2);
		break;
	
		
		case(0):
		printf("Cette equation n'a aucune solution dans R \n\n\n");
		break;					
}	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
