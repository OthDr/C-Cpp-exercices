#include <stdio.h>

	int a,b,c;
	int *p1,*p2;
		
void ptr(int x)
{
	
printf("%d",x);

}
int main()
{
 a=1,b=2,c=3,p1=&a,p2=&c,*p1=*p2,(*p2)++,p1=p2,p2=&b,*p2=*p1-2**p2,(*p2)--,c=(p2==&c),*p2=*p1+a;
		
		printf("a:");ptr(a);
		printf("\nb:");ptr(b);
		printf("\nc:");ptr(c);
		printf("\n p1=%p:",p1);
		printf("\n p2=%p:",p2);		
		printf("\n*p1:");ptr(*p1);
		printf("\n*p2:");ptr(*p2);
		//printf("\n &a=%p:",&a);printf("\n &b=%p:",&b);

		
		
		getchar();getchar();getchar();
return 0;

}
