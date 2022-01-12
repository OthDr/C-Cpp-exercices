#include <iostream>
using namespace std;

struct cell{
	int data;
	cell *next;
};
/////
cell *initialization(){
	cell *head=new cell;
head->data=0;
head->next=NULL;
	return head;
}
cell *add_in_head(cell *head,int x){
	cell *new_item;
	new_item=new cell;
	head->next=new_item;
	new_item->data=x;
//	new_item->next=head->next;
	
	return head;
}
///////////
cell *add_in_end(cell *head,int y){
	cell *new_item;
	cell *browser;
	browser=head->next;
	while(browser->next != NULL)
	browser=browser->next;
	new_item=new cell;
	browser->next=new_item;
	new_item->data=y;
	new_item->next=NULL;
	return head;
}
////////
cell *add_in_mid(cell *head,int position,int z){
	int i=0;
	cell *browser;
	cell *new_item;
	browser=head->next;
	while(i!=position){
		i++;
	browser=browser->next;
	
	}
	new_item=new cell;
	new_item->data=z;
	new_item->next=browser->next;
	browser->next=new_item;
	return head;
}
///////
/*cell *delete_item(cell *head;int position){
	int i;
	cell *browser1;
	cell *browser2;
	browser1=head->next;
	browser2=head->next;
	while(i!=position)
	browser1=browser1->next;
	
	new_item
}*/
////
void display(cell *head)
{
	
		int i=0;
		cell *browser;
	browser=head->next;
	while(browser->next != NULL){
		cout<<browser->data<<"->";
		browser=browser->next;
		
	}
}
int main(){
cell *mylist;	

mylist=initialization();
mylist=add_in_head(mylist,1);
mylist=add_in_end(mylist,2);
mylist=add_in_head(mylist,3);
display(mylist);
return 0;
}

