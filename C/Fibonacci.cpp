#include <stdio.h>
	int fib(int x)
	{if (x==0) return 0;
	 else 
	 	if(x==1) return 1;
	else 
		return fib(x-2)+fib(x-1);	
		
	}
	int main()
	{
		int x;
			printf("Donner un nombre:");
			scanf("%d",&x);
			printf("%d",fib(x));
		
		
		
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			getchar();getchar();getchar();
	return 0;
	}
