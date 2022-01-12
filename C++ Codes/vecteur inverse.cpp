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
