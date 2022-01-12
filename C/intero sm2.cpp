#include <stdio.h>
int main ()
{
int n=10,p,r;
p=n/10;
r=n%10;
while (n>=0){p=p*r;	}
	printf("%d",p);
	
	return 0;
}

