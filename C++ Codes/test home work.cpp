#include<iostream>
using namespace std;

struct cell{
	int data;
	cell *next;
};
///////////////////
cell *initialisation()
{
	cell *head;
	head=new cell;
//	head->data=0;
	head->next=NULL;
	
	return head;

}
////////////////////////////
cell *add_items_queue(int n,cell *p)
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
//////////////////////
cell *add_in_order(cell *listh,int datax)
{
	datax=0;
	cell *browser;
	cell *new_item;
	
	//cout<<"Put the data of the new item:";
	//cin>>datax;
	new_item->data=datax;
	if(listh->next != NULL)
	{
		browser=listh->next;
		while(browser -> next != NULL)
			while(browser->data < new_item->data)
				{browser=browser->next;}
				
				
				new_item->next=browser->next;
				browser->next=new_item;
	}
	return listh;
}
/////////////////////
cell *add_items_head(cell *p,int n)
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
	return p;
}
////////////////////
/*cell *add_in_order(cell *listh,int n)
{
	int x=0;
	cell *browser;
	cell *browser2;
	cell *new_item;
	browser=listh;
for(int i=1;i<=n;i++)
{
	cout<<"put a value";
	cin>>x;
	new_item=new cell;
	new_item->data=x;
	if(new_item->data > browser->data)
	{
		while(new_item->data > browser->data)
			browser=browser->next;
		
		new_item->next=browser->next;
		browser->next=new_item;
	}
	else 
	{
		while(browser->next != NULL)
			browser=browser->next;
		
		browser->next=new_item;
		new_item->next=NULL;	
	}
}
return listh;
}*/
////////////////////
/*void display(cell *list)
{
	cell *browser;
	browser=list->next;
	while (browser!= NULL)
	cout<<browser->data<<"->";
		browser=browser->next;
	
}
*/
void display(cell *p)
{
	cell *br;
	br=p->next;
	while(br!=NULL)
	{
	
		cout<<br->data<<"->";
		br=br->next;
	}
}
int main()
{
	cell *mylist;
	mylist=initialisation();
	mylist=add_items_head(mylist,3);
mylist=add_in_order(mylist,77);
	display(mylist);
	
	getchar();getchar();getchar();
return 0;
}
