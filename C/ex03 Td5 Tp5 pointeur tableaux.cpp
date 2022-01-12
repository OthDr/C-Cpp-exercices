#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tab[10],i;
	int*p0;
	int*p;
		p0=&tab[0];
		i=0;
	for(p=p0;p<&tab[10];p++)
	{i++;
		printf("TAB [%d]:",i);
		scanf("%d",&tab[p-p0]);	
	}
	for(p=p0;p<&tab[10];p++)
	{
	if(tab[p-p0]==0) printf("%d",(p-p0));
	
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		getchar();getchar();getchar();getchar();
	return 0;	
}
