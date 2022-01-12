#include <stdio.h>
#include <math.h>
void eq(float a,float b,float c){
float delta,x,x1,x2;

	
if((a>0||a<0))
{
	delta=(b*b-(4*a*c));
		if(delta==0){x=(-b)/(2*a);printf("x=%.2f",x);}
		else if (delta>0){x1=((-b)-(sqrt(delta)))/2*a;x2=((-b)+(sqrt(delta)))/2*a;printf("Cette equation a deux solutions :\n\n");printf("\t1- x1=%.2f\n\t2- x2=%.2f",x1,x2);}
		else {printf("Cette equation n'a aucune solution dans R \n\n\n");}	
}
else {printf("Cette equation n'est de 2eme degre \n\n\n");}
}
int main(){
	int a,b,c;
printf("Donnez a:");
		scanf("%f",&a);
	printf("Donnez b:");
		scanf("%f",&b);
	printf("Donnez c:");
		scanf("%f",&c);
eq(a,b,c);
return 0;
}
