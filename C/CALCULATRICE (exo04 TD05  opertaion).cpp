#include <stdio.h>
#include <math.h>
int main()
{
	
	float X,a,b;
	int op; 
	
		printf("Voici les operations :\n\n\t1)-Multiplication.\n\n\t2)-Division.\n\n\t3)-Soustaction.\n\n\t4)-Addition.\n\n\t5)-Racine carre.\n\n\t6)Puissance.\n\n\n");	
			printf("Choisissez votre operation:");
			scanf("%d",&op);
				printf("Donnez un nombre:");
					scanf("%f,%f",&a);
					printf("Donnez un autre	 nombre:");
					scanf("%f",&b);
switch(op)
{
		case(1):
		X=a*b;
		printf("La solution de votre operation egale %.2f : %.2f=%.2f*%.2f",X,a,b);	
	break;
	
	case(2):
		X=a/b;
		printf("La solution de votre operation egale %.2f : %.2f=%.2f/%.2f",X,a,b);
	break;
	
	case(3):
		X=a-b;
		printf("La solution de votre operation egale %.2f : %.2f=%.2f-%.2f",X,a,b);
	break;
	
	case(4):
		X=a+b;
		printf("La solution de votre operation egale %.2f : %.2f=%.2f+%.2f",X,a,b);	
	break;
	
	case(5):
		X=a*sqrt(b);
		printf("La solution de votre operation egale %.2f : %.2f=%.2fsqrt%.2f",X,a,b);	
	break; 
	
	case(6):
		X=pow(a,b);
		
		printf("La solution de votre operation egale %.2f : %.2f puissance %.2f = %.2f",X,a,b,X);	
	break;
}
return 0;
}
	
	
	
	
	
	

