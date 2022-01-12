#include <stdio.h>
void mirroire(int n)
{printf("\n    \t\t"); 
while (n>0) {printf("%d",n%10);n=n/10;}
}
int main ()
{int n;
printf("Saisir un nombre:");
scanf("%d",&n); 
mirroire(n);
	
return 0;
}
