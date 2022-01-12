#include <stdio.h>
int main ()
{
float p,pt,ptr;
int num;
pt=0;
num=0;

printf("\t\t\tSoyez Les Bienvenue\n\n\n");printf("-Donnez le prix d'article 1:");
scanf("%f",&p);
while (p!=0)
{
pt=pt+p;num++;
printf("-Donnez le prix d'article %d:",num+1);
scanf("%f",&p);
}
if(pt>5000) {ptr=(0.99*pt);printf("Vous devez payer:%2.fDA\n",ptr);printf("Vous avez %d acrticles",num);}
else {
printf("Vous devez payer:%2.fDA\n",pt);printf("Vous avez %d acrticles",num);
}
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
