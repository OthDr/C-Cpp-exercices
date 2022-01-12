#include <iostream>
	using namespace std;

struct cellule{
	int contenu;
	cellule *suivant;
};
////////////////1
cellule *initial()
{
	cellule *tete=new cellule;
	tete->contenu=NULL;
return tete;
}

cellule *fonc_ajout_debut(int n,cellule *p)
{
	int a;
	
	cellule *nv_element=new cellule;
	cout<<"Put a value for your new element:";
	cin>>a;
	nv_element->contenu=a;//3amert la cellule jdida b a
	nv_element->suivant=p->suivant;//nahit 1ere cellule men pointeur tete (p) w lasegtha m3a cellule jdida bech hya tweli lewla
	p->suivant=nv_element;
	
	return p;
}
////////////////2
cellule *fonc_ajout_fin(int n,cellule *p)
{	
	int A;
	cellule *nv_element;
	cellule *navigateur;
	while(navigateur->suivant!=NULL) navigateur=navigateur->suivant;
	for (int i=0;i<n;i++)
	{
		nv_element=new cellule;
		cout<<"Put a value for your new element:";
		cin>>A;
		nv_element->contenu=A;
		nv_element->suivant=NULL;
		navigateur->suivant=nv_element;
		navigateur=nv_element;
	}
	return p;
}


int main(){
 
	
	
	
	
	getchar();getchar();getchar();getchar();getchar();
	return 0;
}
