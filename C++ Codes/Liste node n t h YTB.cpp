#include <iostream>
using namespace std;
//1) Declaration du structure :Data|next
struct node
 {
	int data;
	node *next;	
	};
//2) Declaration de n=new-t=temperary-h=head
	node *n;
	node *t;
	node *h;
int main()
{
	n=new node;
	n->data=1;
	t=n;
	h=n;

	n=new node;
	n->data=2;
	t->next=n;//to lin node 1 with node 2(Li rah fiha "n")
	
	n=new node;
	n->data=3;
	t->next=n;//to lin node 2 with node 3(Li rah fiha "n")
	
	n=new node;
	n->data=4;
	t->next=n;//to lin node 3 with node 4(Li rah fiha "n")
	
	n->next=NULL;//fin de liste 
getchar();getchar();getchar();getchar();
	return 0;
}	
