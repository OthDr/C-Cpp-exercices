#include <stdio.h>
int main ()
{
int age;
char*genre;
char*femme;
char*homme;
printf("\t\t\t\t_____Bonjour_____\n\n\n\n\n");
printf("Vous etes : Homme ou femme ? :");
scanf("%s",&genre);
printf("\n\n\n\n");
printf("Mettez votre age svp! :");
scanf("%d",&age);
printf("\n\n\n\n");
if((genre=homme)&&(age>=20)||(genre=femme)&&(age>=18)&&(age<=35))
{

printf("Vous devez paier les impots");
}
else{
printf("vous n'avez pas d'impots paiable");	
}
printf("\n\n\n\n");	
	
	
	
	
	
	
	
	
	
	
	

return 0;	
}


