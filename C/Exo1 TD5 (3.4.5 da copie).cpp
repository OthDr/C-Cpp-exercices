#include <stdio.h>
int main()
{
int n,p;
printf("\n\n\n\n\n\n\t-___Vous voulez combien de copies ?___- :");
scanf("%d",&n);
printf("\n\n\n\n\n\n");
if (n<=10)

{p=n*5;
printf("Vous devez paier : %dDA \n\n\n\n\n\n ",p);

	
}else if (n>30)
{
p=10*5+20*4+(n-30)*3;
printf("Vous devez paier : %dDA \n\n\n\n\n\n",p);
}
else
{
p=10*5+(n-10)*4;
printf("Vous devez paier : %dDA \n\n\n\n\n\n",p);
printf("-___MERCI___-");
}	
	
	
	
	
	

return 0;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

