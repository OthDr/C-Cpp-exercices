#include<iostream>
using namespace std;

struct node {
	int data;
	node *leftchild;
	node *rightchild;
};

node *CreateNode(int N)
{
	node *new_node=new node;
	new_node->data=N;
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
///////////////////////////////////
void preorder(node *p)
{
	if (!IsEmpty(p)){
		cout<<p->data<<" ";
		preorder(p->leftchild);
		preorder(p->rightchild);
	}
}
////////////////////////////////
void inorder(node *p)
{
	if (!IsEmpty(p)){
		inorder(p->leftchild);
		cout<<p->data<<" ";
		inorder(p->rightchild);
	}
}
//////////////////////////////
void postorder(node *p)
{
	if(!IsEmpty(p))
	{
		postorder(p->leftchild);
		postorder(p->rightchild);
		cout<<p->data<<" ";
	}
	
}
//////////////////////////////
	void heith(node *tree)
	{
		int ct=0;
		if(IsEmpty(tree)==false)
		{
			ct++;
			heith(tree->leftchild);
			heith(tree->rightchild);
		}
	cout<<"\nheith is equal to:"<<ct;
	}
//////////////////////////////////////////////////////////////////////////	
int main()
{
   node *root,*node2,*node3,*node4,*node5,*node6,*node7;
	
	root=CreateNode(10);
	node2=CreateNode(8);
	node3=CreateNode(15);
	node4=CreateNode(25);
	node5=CreateNode(45);
	node6=CreateNode(77);
	node7=CreateNode(100);
	
	root->leftchild=node2;
	root->rightchild=node3;
	
	node2->leftchild=node7;
	node2->rightchild=node4;
	
	node4->leftchild=node5;
	node4->rightchild=node6;
	
	cout<<"\n\tPreorder _____ ";
	preorder(root);
	cout<<".\n\n\tInorder: _____ ";
	inorder(root);
	cout<<".\n\n\tPostorder: ___ ";
	postorder(root);
	cout<<".";
	heith(root);
	
	
	
	
	
	
	
	
	getchar();getchar();getchar();
	return 0;
}
