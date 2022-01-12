#include <stdio.h>
int main()
{
int d,m,y;
printf("\t\t\t\t_______|Bonjour|_______\n\n\n\n");
printf("__Donnez le jour en chiffre:");
scanf("%d",&d);
printf("\n\n\n\n");
printf("__Donnez le mois en chiffre:");	
scanf("%d",&m);
printf("\n\n\n\n");
printf("__Donnez l'annee:");
scanf("%d",&y);
printf("\n\n\n\n");
switch(m)	
	{case(1):
    	printf("La date:%d Janvier %d",d,y);	
			break;
	case(2):
    	printf("La date:%d Fevrier %d",d,y);
			break;	
	case(3):
    	printf("La date: %d Mars %d",d,y);	
			break;	
	case(4):
    	printf("La date: %d Avril %d",d,y);	
			break;	
	case(5):
    	printf("La date: %d Mai %d",d,y);	
			break;	
	case(6):
    	printf("La date: %d Juin %d",d,y);	
			break;	
	case(7):
    	printf("La date: %d Juillet %d",d,y);	
			break;	
	case(8):
    	printf("La date: %d Aout %d",d,y);	
			break;	
	case(9):
    	printf("La date: %d Septembre %d",d,y);	
			break;	
	case(10):
    	printf("La date: %d Octobre %d",d,y);	
			break;	
	case(11):
    	printf("La date: %d Novembre %d",d,y);	
			break;	
	case(12):
    	printf("La date: %d Decembre %d",d,y);	
			break;	
		
}	
		
	
	
	
return 0;	
}
