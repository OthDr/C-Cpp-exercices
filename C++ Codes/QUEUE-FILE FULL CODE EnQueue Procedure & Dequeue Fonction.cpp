#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};
node *que_head;
/////////////////////////////////////
void Enqueue(int n)
{
	node *browser;
	browser=que_head;
	while(browser->next!=NULL)
	browser=browser->next;
	node *new_b;
	new_b=new node;
	new_b->data=n;
	new_b->next=NULL;
	browser->next=new_b;	
}
/////////////////////////////////////
int dequeue()
{
	node *browser;
	browser=que_head;
	if(browser->next!=NULL)
	que_head->next=browser;
	delete browser;
}
/////////////////////////////////////
int main()
{
	

getchar();getchar();getchar();
	return 0;
}
