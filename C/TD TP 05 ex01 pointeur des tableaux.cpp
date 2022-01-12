#include <stdio.h>
#include <stdlib.h>

int main()
{

	int n,m,i;
		printf("Donner N la taille du tab A:");scanf("%d",&n);	
		printf("\n\nDonner M la taille du tab B:");scanf("%d",&m);
		int *a = malloc(n * sizeof(int);
		int *b = malloc(m * sizeof(int));
		printf("\n\n\t\t**CHARGEMENT DU TABLEAU A:**\n");	
		for (i=0;i<n;i++){
			
			printf("Donner un element %d:",i+1);
			scanf("%d",&a[i]);	
		}
		printf("\n\n\t\t**CHARGEMENT DU TABLEAU B:**\n");	
		for (i=0;i<n;i++){
			
			printf("Donner un element %d:",i+1);
			scanf("%d",&b[i]);		
		}
	
	getchar ();getchar();
	return 0; 
}
