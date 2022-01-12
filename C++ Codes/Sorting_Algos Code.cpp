#include <iostream>
using namespace std;
	void bubble_sort(int tab[100],int n)
	{
		int swp;
	//	for(int i=n-1;i>0;i--)
			for(int j=n;j>=0;j--)
				if(tab[j]<tab[j-1])
				{
					swp=tab[j];
					tab[j]=tab[j-1];
					tab[j-1]=swp;
				}		
	}

int main()
{
	int TAB[100];
	int size,i;
		cout<<"\nPut the size:";
		cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nPut a value in TAB["<<i+1<<"]:";
		cin>>TAB[i];
		
	}
	for(i=0;i<size;i++)
	{
		cout<<"\nValue of TAB["<<i+1<<"]="<<TAB[i];
	}
	cout<<"\n\n\t\t\tAfter Sorting:\n";
	
		bubble_sort(TAB,size);
	
		
	for(i=0;i<size;i++)
	{
		cout<<"\n         TAB["<<i+1<<"]="<<TAB[i];
	}
	
	
	
	
	
	
	getchar();getchar();getchar();getchar();
	return 0; 
}
