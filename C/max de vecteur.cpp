#include <stdio.h>
int main ()
{
int i,max,v[5];

for(i=0;i<5;i++){printf("Sasir un entier dans la case%d:",i);scanf("%d",&v[i]);}
max=v[0];
for(i=0;i<5;i++){if(max<v[i]){max=v[i];}}
printf("max=%d",max);	

	
	
	
	
	
return 0;	
}
