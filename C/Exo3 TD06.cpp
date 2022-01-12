#include <stdio.h>
int main()
{
int n;
float m,x;
printf("donnez le montant de remboursement:");
scanf("%f",&m);
printf("donnez le prix de remboursement a chaque mois:");
scanf("%f",&x);
n=0;
do
{
m=m-x;
n++;
}
while(m>=x);
printf("le nombre des mois =%d , et le reste =%fDA ",n,m);
return 0;
}
