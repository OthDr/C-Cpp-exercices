#include <stdio.h>
int main ()
{
int t[2][3];
int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("tab[%d][%d]=",i,j);scanf("%d",&t[i][j]);
}	
}
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{ printf("tab[%d][%d]=%d\n",i,j,t[i][j]);}
}
return 0;	
}
