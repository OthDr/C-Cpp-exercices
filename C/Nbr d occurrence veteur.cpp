#include <stdio.h>
int main()
{
int i,v[20],c,nbr;
for(i=0;i<20;i++){printf("v[%d]=",i);scanf("%d",&v[i]);}
printf("Saisir un nombre pour savoir si il a eu d occurrence:");scanf("%d",&nbr);
c=0;
for(i=0;i<20;i++){if(v[i]==nbr)c=c+1;}
printf("Le nombre d occurrences est egale=%d",c);

return 0;	
}
