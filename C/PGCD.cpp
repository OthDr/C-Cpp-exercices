#include <stdio.h>
int main ()
{
int a,b,x,pgcd,pt;
printf("Saisir a:");
scanf("%d",&a);
printf("Saisir b:");
scanf("%d",&b);
pt=a;
if(b<pt)pt=b;
for (x=1;x<=pt;x=x+1)
{
if((a%x==0)&&(b%x==0))pgcd=x;	
}
printf("Le plus grand deviseur commun est egale:PGCD=%d",pgcd);

return 0;	
}
