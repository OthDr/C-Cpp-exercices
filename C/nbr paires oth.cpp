#include <stdio.h>
#include <math.h>
int main ()
{
int i,n,pr;
printf("Donnez le nombre de la borne:");
scanf("%d",&n);
pr=0;
for(i=0;i<=n;i++){
	if(i%2=0){pr=pr+1;printf("%d\n",i);}
				 }
printf("Il y a %d nombre paire entre 0 et %d ",pr,n);	
return 0;	
}
