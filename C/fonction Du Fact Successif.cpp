#include <stdio.h>


int FACTO(int n){
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
	for (i=0;i<=n;i++) {s=s+(double (i)/double (FACTO(i)));}
	 printf("%f",s);
	 getchar();getchar();
return 0;
}
