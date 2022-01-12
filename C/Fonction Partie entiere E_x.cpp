#include <stdio.h>
	int E_x(float n)
		{
			int Ex,Exx;
				while (Ex<=n)Ex++;
				Exx=Ex-1;
			return Exx;
		}	
	int main ()
		{
			float n;
				printf("Saisir un nombre Positif :");scanf("%f",&n);
				if(n>=0) printf ("La partie entiere du %f est :%d",n,E_x(n));
				else printf ("Ce nombre n'est pas positif:");
	
	
	
	
				getchar();getchar();
			return 0;
		}
