#include <iostream>
using namespace std;
 
 
 int main()
  {
  	
  	int *p=new int(61);
  	cout<<*p<<endl;
  	delete p;
  	p=new int[5];
  		for(int i=0;i<5;i++) cin>>p[i];
  		for(int i=0;i<5;i++) cout<<p[i];
  		delete []p;
  		
  		
  		
  //system("pause");	
getchar();getchar();getchar();getchar();
return 0;
}
