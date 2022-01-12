#include <stdio.h>
int main ()
{
float a,s,e;
printf("\t\t\t\tBIENVENUE !\n\n\n\n\n Vous devez saisir vos notes: \n\n\n\n");
printf("1-Donnez votre note d'algoritmique :");
scanf("%f",&a);
printf("\n\n\n");
printf("2-Donnez votre note de codage :");
scanf("%f",&s);
printf("\n\n\n");
printf("3-Donnez votre note d'englais :");
scanf("%f",&e);
printf("\n\n\n");

if((((a*4)+(s*3)+(e))/8)>=10)
printf("Felicitation! vous etes admis\n\n\n\n");
else
printf("vous n'etes pas admis malheuresement\n\n\n\n\n\n\n\n\n\n\n\n\n\n ");
return 0;
}
	
	
	
	

