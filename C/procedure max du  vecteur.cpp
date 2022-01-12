#include <stdio.h>
void max(int n,float v[]){
	int i;float max;
max=0;
max=v[0];
for(i=0;i<n;i++){if(max<v[i]){max=v[i];}}
printf("le contenu du colone %d contien la plus grande valeur et est egale=%f",i,max);

}
int main ()
{
int i,n;float v[250];
printf("Sasir le nombre des colones du tableau:");scanf("%d",&n);		
for(i=0;i<n;i++){printf("Sasir un entier dans la case '%d':",i+1);scanf("%f",&v[i]);}
max(n,v);

#include <iostream>
#include <string>
 using namespace std;


int main()

{
	int T[10];
	int i;
		
		for(i=0;i<10;i++)
			{
				cout<<"saisir TAB["<<i<<"]:";
	
				cin>>T[i];
				
				}
				cout<<"\n\n \t______________________________Voici l'inverse de votre Tableau:\n";	
		for(i=9;i>=0;i--)
			{
			
				
				cout<<"saisir TAB["<<i<<"]:"<<T[i]<<"\n" ;		
				
				
				}








		
	getchar();getchar();	getchar();getchar();

return 0;
}
