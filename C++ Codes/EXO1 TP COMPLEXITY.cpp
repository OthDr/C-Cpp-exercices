#include<iostream>
using namespace std;

int function1(int n)
{
	if(n<=0)
		return 1;
	else
		return 1+ function1(n-1);
}
///////////////////////////
int function2(int n)
{
	if (n<=0)
		return 1;
	else
		return 1+function2(n-5);
}
///////////////////////////////
int function3(int n)
{
	if (n<=0)
		return 1;
	else
		return 1+function3(n/5);
}
///////////////////////////////
int function4(int n)
{
	for(int i=0;i<n;i++)
	{
		function4(n-1);
	}	
}
////////////////////////////////////
int function5(int n)
{
	for(int i=0;i<n;i+=2)
	{
		//operation
	}
if (n<=0)
	return 1;
else
return 1+function5(n-5);	
}
/////////////////////////////////////////
void function6(int a,int b,int c)
{
	if(a<=0)
	{	cout<<"func6:"<<b<<c<<endl;
	}
	else
	{	function6(a-1,b+1,c);
		function6(a-1,b,c+1);
	}
}
////////////////////////////////////////
int main()
{

//function1(300);
//function2(300);	
//function3(300);	
//function4(300);
//function5(300);
//function6(1,1,1);	*/
	
	
	
	
	
	getchar();getchar();getchar();
	return 0;
}






























