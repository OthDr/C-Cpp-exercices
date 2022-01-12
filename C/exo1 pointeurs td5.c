#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *a;
	int *b;
	int i,n,m;	

		printf("n de A:");
		scanf("%d",&n);
		printf("m de B:");
		scanf("%d",&m);	

			a=malloc(n*sizeof (int));
			b=malloc(m*sizeof(int));
			
		for(i=0;i<n;i++)	
		{
			printf("\n\tA[%d]:",i+1);
			scanf("%d",&a[i]);	
		}
		for(i=0;i<m;i++)	
		{
			printf("\n\tB[%d]:",i+1);
			scanf("%d",&b[i]);	
		}
	a=realloc(a,n+m);
	for(i=0;i<m;i++)	
		{
		a[n+i]=b[i];
		}
	for(i=0;i<n+m;i++)	
	{
			printf("\n\tA[%d]=%d",i+1,a[i]);
	}
	
	getchar();getchar();getchar();getchar();
	return 0;
}
