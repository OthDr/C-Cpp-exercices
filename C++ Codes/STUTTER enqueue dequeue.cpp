#include <iostream>
using namespace std;

struct cell{
	int data;
	cell *next;
};
cell *qh;
int size()
	{
		cell *browser=qh->next;
		int i=0;
		while(browser->next != NULL)
		{
	 	    i++;
			browser=browser->next;	
		}
	return i;	 	
	}
void enqueue(int n)
{
	cell *browser;
	browser=qh;
	while(browser->next!=NULL)
	browser=browser->next;
	cell *new_b;
	new_b=new cell;
	new_b->data=n;
	new_b->next=NULL;
	browser->next=new_b;	
}
/////////////////////////////////////
int dequeue()
{
	cell *browser;
	browser=qh;
	if(browser->next!=NULL)
	qh->next=browser;
	delete browser;
}
/////////////////////////////////////	

void STUTTER()
{
	int x;
	x=size();
	for(int i=0;i<x;i++)
	{
		int y=dequeue ();
		enqueue(y);
		enqueue(y);
	}
		
}	
int main()
{
	
	
	
	
	
	
	return 0;
	getchar();getchar();	getchar();getchar();
}
