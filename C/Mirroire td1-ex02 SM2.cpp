#include <stdio.h>
void SDd(int n)
{int i;
while (n>=0){printf("%d",n%10);n=n/10;
}}

int main()
{int n;
scanf("%d",&n);
SDd(n);	
}

