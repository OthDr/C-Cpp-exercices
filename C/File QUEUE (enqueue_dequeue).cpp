#include <iostream> //QUEUE FILE boulangerie
using namespace std;
	
	struct *cell{int data;cell *next;};
	cell *head;
void ENQUEUE(int n)
{
	cell *br;
	br=q_h;
	while(br != NULL)
	{br=br->next;}
		cell *item;
		item=new cell;
		item->data=n;
		item->next=NULL;
		br->next=item;
	
}
int DEQUEUE()
{
	int x=0;
	cell *br=q_h->next;
	if(br!=NULL)
	{
		q_h->next=br->next;
		x=browser->data;
	}
return x;
}

 	
int main()
{
		
	getchar();getchar();getchar();getchar();
	return 0;
}
