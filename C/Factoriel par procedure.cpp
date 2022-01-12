#include <stdio.h>
void FACT(int n)
{
		int i;long f;
f=1;
i=1;
for(i=1;i<=n;i++){
f=f*i;	        }
printf ("%d",f);
}	



int main()
{
int n;	
printf("Sasir le nombre:");
scanf("%d",&n);	getchar();
FACT(n);
	
return 0;	
}	
