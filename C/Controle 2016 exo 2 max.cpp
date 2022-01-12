#include <stdio.h>
int main ()
{
int a,b,c,i,max;
printf("Saisir A:");
scanf("%d",&a);	
printf("Saisir B:");
scanf("%d",&b);	
printf("Saisir C:");	
scanf("%d",&c);	
if((a>=b)&&(a>=c)){printf("max=%d",a);}
else if((b>=a)&&(b>=c)){printf("max=%d",b);}
else if((c>=a)&&(c>=b)){printf("max=%d",c);}
getchar();getchar();
return 0;}
