#include <stdio.h>
	float SommeTab(int N,float Tab[])
	{
			float sm;int i;
				sm=Tab[0];
				for(i=1;i<=N;i++)sm=sm+Tab[i];
	return sm;
	}
	float MoyenneTab(int N,float Tab[])
	{
			int i;
			float M;
			M=SommeTab(N,Tab)/N;
	return M;	
	}
	float MaxTab(int N,float Tab[])
	{
		int i;
		float Mx;
		Mx=Tab[0];
		for(i=1;i<=N;i++)
		if(Mx<Tab[i])Mx=Tab[i];
	return Mx;
	}
	float MinTab(int N,float Tab[])
	{
		int i;
		float Mn;
		Mn=Tab[1];
		for(i=1;i<=N;i++)
		if(Mn>Tab[i])Mn=Tab[i];
	return Mn;
	}
int main ()
{ 
	int i;
	int N;
	int Chx;
	float Tab[N];
		printf("\t\t\t\t____BONJOUR____\n\n\n\n");printf("\tDonnez le nombre des colones de votre tableau :");scanf("%d",&N);
		for(i=1;i<=N;i++){printf("?_Tab[%d]=",i);scanf("%f",&Tab[i]);}
		printf("\n\n1\-Calcule de la sommes de contenu du tableau :\n2\-Calcule de la moyenne des valoeurs stockee:\n3\-Calcule de la valeur MAXIMALE & MINIMALE du tableau:");
		printf("\n\tChoisir une instruction:");scanf("%d",&Chx);	printf("\n***************************************************************************");
	switch(Chx)	
	{
	case 1 :printf("\n\nLa somme est egale =%f",SommeTab(N,Tab)); break;
	case 2 :printf("La Moyenne =%f",MoyenneTab(N,Tab));break;	
	case 3 :printf("Le Max=%f & le Min=%f",MaxTab(N,Tab),MinTab(N,Tab));break;
	}
			printf("\n\n1\-Calcule de la sommes de contenu du tableau :\n2\-Calcule de la moyenne des valoeurs stockee:\n3\-Calcule de la valeur MAXIMALE & MINIMALE du tableau:");
		printf("\n\tChoisir une instruction:");scanf("%d",&Chx);	printf("\n***************************************************************************");
	switch(Chx)	
	{
	case 1 :printf("\n\nLa somme est egale =%f",SommeTab(N,Tab)); break;
	case 2 :printf("La Moyenne =%f",MoyenneTab(N,Tab));break;	
	case 3 :printf("Le Max=%f & le Min=%f",MaxTab(N,Tab),MinTab(N,Tab));break;
	}
			printf("\n\n1\-Calcule de la sommes de contenu du tableau :\n2\-Calcule de la moyenne des valoeurs stockee:\n3\-Calcule de la valeur MAXIMALE & MINIMALE du tableau:");
		printf("\n\tChoisir une instruction:");scanf("%d",&Chx);	printf("\n***************************************************************************");
	switch(Chx)	
	{
	case 1 :printf("\n\nLa somme est egale =%f",SommeTab(N,Tab)); break;
	case 2 :printf("La Moyenne =%f",MoyenneTab(N,Tab));break;	
	case 3 :printf("Le Max=%f & le Min=%f",MaxTab(N,Tab),MinTab(N,Tab));break;
	}
			printf("\n\n1\-Calcule de la sommes de contenu du tableau :\n2\-Calcule de la moyenne des valoeurs stockee:\n3\-Calcule de la valeur MAXIMALE & MINIMALE du tableau:");
		printf("\n\tChoisir une instruction:");scanf("%d",&Chx);	printf("\n***************************************************************************");
	switch(Chx)	
	{
	case 1 :printf("\n\nLa somme est egale =%f",SommeTab(N,Tab)); break;
	case 2 :printf("La Moyenne =%f",MoyenneTab(N,Tab));break;	
	case 3 :printf("Le Max=%f & le Min=%f",MaxTab(N,Tab),MinTab(N,Tab));break;
	}
			printf("\n\n1\-Calcule de la sommes de contenu du tableau :\n2\-Calcule de la moyenne des valoeurs stockee:\n3\-Calcule de la valeur MAXIMALE & MINIMALE du tableau:");
		printf("\n\tChoisir une instruction:");scanf("%d",&Chx);	printf("\n***************************************************************************");
	switch(Chx)	
	{
	case 1 :printf("\n\nLa somme est egale =%f",SommeTab(N,Tab)); break;
	case 2 :printf("La Moyenne =%f",MoyenneTab(N,Tab));break;	
	case 3 :printf("Le Max=%f & le Min=%f",MaxTab(N,Tab),MinTab(N,Tab));break;
	}
			printf("\n\n1\-Calcule de la sommes de contenu du tableau :\n2\-Calcule de la moyenne des valoeurs stockee:\n3\-Calcule de la valeur MAXIMALE & MINIMALE du tableau:");
		printf("\n\tChoisir une instruction:");scanf("%d",&Chx);	printf("\n***************************************************************************");
	switch(Chx)	
	{
	case 1 :printf("\n\nLa somme est egale =%f",SommeTab(N,Tab)); break;
	case 2 :printf("La Moyenne =%f",MoyenneTab(N,Tab));break;	
	case 3 :printf("Le Max=%f & le Min=%f",MaxTab(N,Tab),MinTab(N,Tab));break;
	}
			printf("\n\n1\-Calcule de la sommes de contenu du tableau :\n2\-Calcule de la moyenne des valoeurs stockee:\n3\-Calcule de la valeur MAXIMALE & MINIMALE du tableau:");
		printf("\n\tChoisir une instruction:");scanf("%d",&Chx);	printf("\n***************************************************************************");
	switch(Chx)	
	{
	case 1 :printf("\n\nLa somme est egale =%f",SommeTab(N,Tab)); break;
	case 2 :printf("La Moyenne =%f",MoyenneTab(N,Tab));break;	
	case 3 :printf("Le Max=%f & le Min=%f",MaxTab(N,Tab),MinTab(N,Tab));break;
	}
getchar();getchar();
return 0;	
}	