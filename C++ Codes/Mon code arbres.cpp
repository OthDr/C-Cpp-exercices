#include <iostream>
using namespace std;

struct node
{
	int data;
	*node right;
	*node left;
};

	node *create(int data)
	{
		node *new_node;
		root=new node;
		root->data=data;
		root->right=NULL;
		root->left=NULL;
	
		return p;
	}
	
	bool isempty(node *p;)
	{
		bool result;
		if(node == NULL) return true;
		else 			 return false;

	}
	void preorder(node *tree)
	{
		if (isempty(tree) == false)
		{
			cout<<tree->data<<"_";
			preorder(tree->left);
			preorder(tree->right);
		}
		else	cout<<"This tree is empty";
	}
/////////////////////////////////////////////////////////////////////////////////
	void inorder(node *tree)
	{
		if (isempty(tree) == false)
		{
			inorder(tree->left);
			cout<<tree->data<<"_";
			inorder(tree->right);
		}
		else	cout<<"This tree is empty";		
	}
/////////////////////////////////////////////////////////////////////////////////	
	void postorder(node *tree)
	{
		if (isempty(tree) == false)
	                                                                                                                      	{
			postorder(tree->left);
			postorder(tree->right);
			cout<<tree->data<<"_";
		}
		else	cout<<"This tree is empty";	
	}
////////////////////////////////////////////////////////////////////////////
	void heith(node *tree)
	{
		int ct=0;
		if(isemty(tree))
		{
			ct++;
			heith(tree->left);
			heith(tree->)
		}
	cout<<"heith is equal to:"<<ct;
	}
	
	
	
	
	
	
	
	
	
	
	
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	int main()
	{
	
	node *root=NULL;
	
	return 0;	
	}
	
	
	
	
