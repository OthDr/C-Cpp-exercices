#include <iostream>
using namespace std;


	int sum(int a,int b)
		{
		int x;
			x=a+b;
			return x;
			}
	int main()
	{
		
		int A,B;
		cout<<"\n\tGive A:";
		cin>>A;
		cout<<"\n\tGive B:";
		cin>>B;
		
		cout<<"sum="<<sum(A,B);
		
		getchar();getchar();getchar();getchar();
		return 0;
			}		
