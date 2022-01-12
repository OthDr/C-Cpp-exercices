/*
Prof: Raouf Ouanis Lakehal AYAT
-------------------------------
Nom:Derrar
Prenom:Othmane
Groupe:G02 sg-1

            THIRD HOME WORK:COMPLETE tree test
            ---------------------------------
        										*/
///////////////////////////////////////////////////////
#include<iostream>
#include<math.h>
using namespace std;
struct node {
	int  data;
	node *leftChild;
	node *rightChild;
};
    
bool IsEmpty(node *p) {
	if (p==NULL) return true;
	else         return false;
}
    
int height(node*tree)
{
	int Left,Right;
	
	if (IsEmpty(tree))
		return 0;
	else {
		Left =1+height(tree->leftChild);
		Right =1+height(tree->rightChild);
	if (Left > Right)
		return Left;
	else
	return Right;
	}
}   							
///////////////////////////CALCULATE NUMBER OFLEAVES
int	leaves_counting(node*tree)
{
	while(tree != NULL)
		if(tree->leftChild == NULL)
		{
			if(tree->rightChild==NULL)
				return 1;
		}
		else return leaves_counting(tree->leftChild)+leaves_counting(tree->rightChild);		
	return 0;
}

////////////////////////////TEST IF A TREE'S COMPLETE

bool IsComplete(node*tree)
{
	int Heith,Leaves;
	
	Heith=height(tree);
	Leaves=leaves_counting(tree);
	
	if(pow(2,Heith)-1==Leaves)//number of leaves of a COMPLETE BT=(2^heith)-1
		return true;
	else
		return false;	
}


int main()
{
	node*myBT;
//myBT=insert(myBT,5)
cout<<"Prof: Raouf Ouanis Lakehal AYAT\n------------------------------------\nNom:Derrar\nPrenom:Othmane\nGroupe:G02 sg-1\n\n\t\tTHIRD HOME WORK:COMPLETE tree test";	
	
getchar();
return 0;
}
























