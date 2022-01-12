#include <stdio.h>	
void S_D(int n)

{int i,sd;
	sd=0;
	for(i=1;i<=n/2;i++)
		{if(n%i==0) sd=sd+i;}
		if(sd==n)printf("Ce nombre '%d' est parfait\n",n);else printf("Ce nombre '%d' n'est pas parfait\n",n);
		printf("\t\tLa somme des diviseurs egale a:%d\n\n",sd);
}
int main ()
{
int i,n,irv,choix;
printf("Choisissez un choix parmis ces deux :\n\t 1)-Savoir si un nombre est parfait ou pas.\n\t2)-Savoir si un nombre est parfait ou pas dans un intervale.\n\t");
scanf("%d",&choix);
switch(choix){
case (1):printf("Donner un mombre:");
scanf("%d",&n);printf("\n\n\n");
S_D(n); 
break;
case (2): printf("Saisir Le max d'intervale:");scanf("%d",&irv);printf("\n\n\n"); for (i=1;i<=irv;i++){ S_D(i);}
break;
}
return 0;	
}  
