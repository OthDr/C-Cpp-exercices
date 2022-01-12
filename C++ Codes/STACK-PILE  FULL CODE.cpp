#include <iostream>
using namespace std;

struct node {int data;node  *next;};

//	node  *node _h;

	void push(int n,node  *node _h)
	{
		node  *new_item=new node ;
		new_item->data=n;
		new_item->next=node _h->next;
		node _h->next=new_item;
	}
///////////////////////////////////////////////////////////////
	int pop()
	{
		node  *browser;
		int y=0;
		if(node _h->next != NULL)
		{
			browser=node _h->next;
			node _h->next=browser->next;
			y=browser->data;
			delete browser;
			}
	return y;			
	}
//////////////////////////////////////////////
	int peek()
	{
		int x=0;
		x=node _h->next->data;
		//xx=node _h->next;
		//x = xx->data;
	/*-------------------
	node  *browser;int y=0;
	browser=node _h->next;
	if(node _h->next != NULL)
	y=browser->data;
	return y;*/
	return x;
	}
///////////////////////////////////////////////
	int SIZE()
	{
		node  *browser=node _h;int size=0;
		while (browser->next != NULL)
		{
			browser=browser->next;
			size++;
		}
	return size;
	}
///////////////////////////////
	bool ISEMPTY(node  *head)
	{
		if(head->next != NULL){
			cout<<"This node  is not empty\n";
			return false;

		}else{
			cout<<"This node  is empty\n";
			return true;
		}
			
					
	}
//////////////////////////////////////////////
//////////////////////////////////////////////
int main()
{
	int x,r;
	node _h=new node ;
	node _h->next=NULL;
	
		menu:
	do
	{
		cout<<"==============================================================================\n";
		cout<<"Which function to excute?"<<"\n\n1/ PUSH.\n"<<"2/ POP.\n"<<"3/ PEEK.\n"<<"4/ SIZE.\n"<<"5/ IsEmpty\n"<<"6/ EXIT.\n"<<endl;
		cin>>r;
		}	
	while(r<1 || r>5);
	switch(r)
	{
		case 1:cout<<"Add a value to the node :";cin>>x;push(x);break;
		case 2:cout<<"==========\n"<<"result="<<pop()<<endl;break;
		case 3:cout<<"==========\n"<<"result="<<peek()<<endl;break;
		case 4:cout<<"==========\n"<<"result="<<SIZE()<<endl;break;
		case 5:ISEMPTY(node _h);break;
	}
	if (r != 6) goto menu;	
//	getchar();getchar();getchar();getchar();getchar();getchar();
	return 0;
}




















