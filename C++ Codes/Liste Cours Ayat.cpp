#include <iostream>
#include <conio.h>
using namespace std;

struct cell
{	
	int data;
	cell *next;
};
	cell *head;
cell *initialization(){
		cell *element;
		element=new cell;
		head=new cell;
		element->data=0;
		element->next=NULL;
		head=element;	
		return (head);		
	}
cell *add_items_head(int n,cell *p)
{
	cell *new_item;int y;
	for(int i=1;i<=n;i++)
	{
		new_item=new cell;
		cout<<"add a value to the new item"<<endl;
		cin>>y;
		new_item->data=y;
		new_item->next=p->next;
		p->next=new_item;
	}
}
cell *add_item_queue(int n,cell *p)
{
	cell *new_item,*browser;
	int y;
	browser=p;
	while(browser->next != NULL)
		browser=browser->next;
	for(int i=1;i<=n;i++)
	{
		new_item=new cell;
		cout<<"Add a value to the new item"<<endl;
		cin>>y;
		new_item->data=y;
		new_item->next=NULL;
		browser->next=new_item;
		browser=new_item;	
	}	
	return p;	
}
cell *delete_item_head(cell*p)
{
	cell *browser;
	if(p->next != NULL)
	{
		browser=p->next;
		p->next=browser->next;
		delete browser;
		}
	return p;		
}	
void list_display(cell *p)
{
	cell *browser;
	browser=p->next;
	while(browser!=NULL)
	cout<<browser->data<<endl;
	browser=browser->next;
}
int main()
{
	cell *mylist;
	int size;
	mylist=initialization();
	cout<<"Put the number of the items:";
	cin>>size;	
	mylist=add_items_head(size,mylist);
	list_display(mylist);
		
	getchar();getchar();getchar();getchar();
	return 0;
}
