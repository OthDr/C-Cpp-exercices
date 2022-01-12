#include <iostream>
using namespace std;
 
 
 int main()
  {
  	
  int a=4,t[10]={2,5,1,4,3,6,7,9,8,11};
  int *p1=t,*p2= &a;
	
	cout <<*p1<<endl;
	cout <<*p1+*p2<<endl;
	p2=p1; p1+=5;
	cout<<*p1+10<<endl;
	cout<<p1-p2<<endl;

  system("pause");	
getchar();getchar();getchar();getchar();
return 0;
}
