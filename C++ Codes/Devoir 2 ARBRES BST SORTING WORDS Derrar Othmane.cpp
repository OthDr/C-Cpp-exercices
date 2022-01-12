
/* Nom:Derrar
   Prénom:Othmane
   groupe:G02 sg1
                                Deuxième Devoir D'ASD "ARBRES"
								
*/ 

#include <iostream>
#include <string.h>
using namespace std;

struct node {
	char word[10];
	node *leftchild;
	node *rightchild;
};
////////////////////////////////////
node *CreateNode(char *item,int lngth)
{
	node *new_node=new node;
	for(int i=0;i<lngth;i++) new_node->word[i]=item[i];
	new_node->leftchild=NULL;
	new_node->rightchild=NULL;
	
	return(new_node);
}
/////////////////////////////////////
bool IsEmpty(node *p)
{
	if(p == NULL) return true;
	else 		  return false;
}
///////////////////////////////////////
void SORTED_BST(char *item,node *p,int lngth,int br)
{
	
	if(item[br]<p->word[br])
	{
		if(p->leftchild != NULL)
			SORTED_BST(item,p->leftchild,lngth,br);
		else 
			p->leftchild=CreateNode(item,lngth);
			
	}
	else if (item[br]>p->word[br])
	{
		if (p->rightchild != NULL)
			SORTED_BST(item,p->rightchild,lngth,br);
		else
			p->rightchild=CreateNode(item,lngth);
	}
	else
		SORTED_BST(item,p,lngth,br+1);
			
}
///////////////////////////////////////////////////
void inorder(node *p)
{
	if (!IsEmpty(p))
	{
		inorder(p->leftchild);
		cout<<p->word<<" ";
		inorder(p->rightchild);
	}
}
///////////////////////
int main()
{
	node *tr=NULL;
	char item[10];
	int TrSize,lng;
	
	for(int i=0;i<TrSize;i++){
	cout<<"Tape the number of nodes you want to create:";
	cin>>TrSize;
	
	lng=strlen(item);
	
	if(tr==NULL)
		tr=CreateNode(item,lng);
	else
		SORTED_BST(item,tr,lng,0);
	}
	inorder(tr);
	
	getchar();getchar();getchar();
return 0;
}






































