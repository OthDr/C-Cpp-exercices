#include <stdio.h>
int main ()
{
int v[10],i;
for (i=0;i<10;i++){printf("Saisir un entier dans la case %d:",i);scanf("%d",&v[i]);}
for(i=9;i>=0;i--){printf("% d=%d",i,v[i]);}







return 0;	
}
