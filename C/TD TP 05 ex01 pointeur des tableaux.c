#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m,i;
			printf("Donner N la taille du tab A:");scanf("%d",&n);	
			printf("\n\nDonner M la taille du tab B:");scanf("%d",&m);
		int *a = malloc(n * sizeof(int));
		int *b = malloc(m * sizeof(int));
			printf("\n\n\t\t**CHARGEMENT DU TABLEAU A:**\n");	
		for (i=0;i<n;i++)
		{	
			printf("Donner un element %d:",i+1);
			scanf("%d",&a[i]);	
		}
			printf("\n\n\t\t**CHARGEMENT DU TABLEAU B:**\n");	
		for (i=0;i<n;i++)
		{
			printf("Donner un element %d:",i+1);
			scanf("%d",&b[i]);		
		}s
		a=realloc(a,m+n);
		for (i=0;i<m;i++)
		{
		a[n+i]=b[i];	
		}
	for(i=0;i<m+n;i++)
	{printf("A[%d]=%d\n",i,a[i]);
	}
	free(a);
	printf("\n\n On vide la matrice 'A'\n");
	for(i=0;i<m+n;i++)
	{printf("A[%d]=%d\n",i,a[i]);
	}
	getchar ();getchar ();getchar ();getchar ();
	return 0; 
}
