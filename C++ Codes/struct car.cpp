#include <iostream>
#include <string>
	using namespace std;
 struct car 
   {
   	char name[15];
   	int year;
   	float price;
   }; 
int main()
	{
	struct car Car;
//***********************************************
	cout<<"Insert car name:";
						    	//gets(Car.name);
								cin>>Car.name;   
	cout<<"Insert car Year:";
								cin>>Car.year;   
	cout<<"Insert car Price:";
								cin>>Car.price;  
	cout<<"\t\n car name is:"<<Car.name;        
	cout<<"\n\tCar year is:"<<Car.year;         
	cout<<"\n\tcar price is:"<<Car.price;        
		
		getchar();getchar();getchar();getchar();
	return 0;
}
