#include <stdio.h>


float FACTO(int n){
	int i,fact;
	fact=1;
	for(i=1;i<=n;i++){fact=fact*i;}	
	return fact;	
}
int main(){ 
	int n,i;double s;
		printf ("\t\t**************************************************\n\n\n\n\t-Donner un nombre:");
		scanf("%d",&n);
		printf("\t||||||| Le factoriel du %d est egale =%d |||||||",n,FACTO(n))	;
		printf ("\t\t\t**********************************************************************\n\n\tLa some de la serie :(1/1!+2/2!+...+n/n!): ");
	s=0;	
	for (i=0;i<=n;i++) {s=s+(i/FACTO(i));}
	 printf("%f",s);
	 
	 system("pause");
	 return 0;
}
