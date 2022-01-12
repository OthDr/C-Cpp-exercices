#include <stdio.h>
#include <Stdlib.h>
#include <string.h>
   struct car 
   {
   	char name[15];
   	int year;
   	float price;
   };
int main()
{
	struct car Car;
//******************
	printf("Insert car name:");n
								//gets(Car.name);
								scanf("%s",&Car.name);
	printf("Insert car Year:");
								scanf("%d",&Car.year);
	printf("Insert car Price:");
								scanf("%f",&Car.price);

	printf("\t\n car name is:%s",Car.name);
	printf("\n\tCar year is:%d",Car.year);
	printf("\n\tcar price is:%3.f",Car.price);
		
		getchar();getchar();getchar();getchar();
	return 0;
}
