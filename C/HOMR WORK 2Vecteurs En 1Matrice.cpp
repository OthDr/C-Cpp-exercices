#include <stdio.h>
int main ()
{
int v1[3],v2[3],i,j,m[3][3]={{v1[0],v1[1],v1[2]},{v2[0],v2[1],v2[2]}};


printf("Chargement d vecteur 1:\n");
		for(i=0;i<3;i++){printf("Saisir un entier dans case %d:",i+1);scanf("%d",&v1[i]);}	
printf("Chargement d vecteur 2:\n");
		for(i=0;i<3;i++){printf("Saisir un entier dans case %d:",i+1);scanf("%d",&v2[i]);}	

	for(i=0;i<3;i++){for(j=0;j<3;j++){

	printf("TAB[%d][%d]=%d\n",i+1,j+1,m[v1[i]][v2[i]]);
	}}	

		
	
	
	
	
return 0;	
}
