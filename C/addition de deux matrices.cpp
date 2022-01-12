#include <stdio.h>
int main ()
{
int m1[2][2],m2[2][2],m3[2][2],i,j;
for (i=0;i<2;i++){for(j=0;j<2;j++){printf("Tab1[%d][%d]=",i,j);scanf("%d",&m1[i][j]);}}	
printf("\t\t\t***Tab2***\n");
for (i=0;i<2;i++){for(j=0;j<2;j++){printf("Tab2[%d][%d]=",i,j);scanf("%d",&m2[i][j]);}}	
for (i=0;i<2;i++){for(j=0;j<2;j++){
m3[i][j]=m1[i][j]+m2[i][j];

printf("Tab3=%d\n",m3[i][j]);}}
	
return 0;	
}
