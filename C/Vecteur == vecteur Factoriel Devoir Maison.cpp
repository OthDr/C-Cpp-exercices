#include <stdio.h>


int FACTO(int n){
	int i;long int fact;
	fact=1;
	for(i=1;i<=n;i++){fact=fact*i;}	
	return fact;	
}
int main()
{
	int i,f,n;
	int v[100],vf[100];
	
	printf("Donner la langueur du vecteur:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nSaisir un nombre dans la case %d		:",i+1);
		scanf("%d",&v[i]);
		
	}
	for(i=0;i<n;i++){
			vf[i]=FACTO(v[i]);
		printf("\n\tLe factoriel du %d=%d\n",v[i],vf[i]);
	}
	
	
	getchar ();//getchar();
		return 0;
}
