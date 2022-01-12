#include <stdio.h>
	
	int otx(int n)
{
	int p,r;	
		while (n>=0){r=n%10;n=n/10;	p=r*n;}
	return p;
}


int main(){
	int n;
		printf("Donner un nombre:");
		scanf("%d",&n);
		
		otx(n);
		printf("%d",otx(n));
			
		
		
		
		
		
		
					getchar();	getchar();	getchar();	
	return 0;
}

