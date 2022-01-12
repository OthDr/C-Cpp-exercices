#include <stdio.h>
	int main()
	{
 	int t[10];
 	int *id;
 	int *ic;
 	int *ifn;
		id=&t[0];
		ifn=&t[10-1];
		for(ic=id;ic<=ifn;ic++)
		{
			printf("t[%d]=",ic-id);
			scanf("%d",&t[ic-id]);
			}	
		
		for(ic=id;ic<=ifn;ic++)
		{if(*ic==0) printf("indice num:%d",ic-id);}
	
	




getchar();getchar();getchar();getchar();
	
return 0;
	}
