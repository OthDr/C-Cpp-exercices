#include <stdio.h>


long int FACTO(int n){
	int i;long int fact;
	fact=1;
	for(i=1;i<=n;i++){fact=fact*i;}	
	return fact;	
}
int main(){ 
	int n,i;float N,sc,j;
	printf ("\t\t\t******************************\n\n\n\n\t-Donner un nombre:");
	scanf("%d",&n);
	printf("\t||||||| Le factoriel du %d est egale =%d |||||||",n,FACTO(n))	;
	getchar();getchar();
	return 0;
}
