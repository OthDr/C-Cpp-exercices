#include <iostream>
using namespace std;

struct parcel
	{
	float weith;
	char send_date[25];
	char destination[25];
	};
	
int main ()
{
	int N;
	cout<<"Donner le nombre des colis:";
	cin>>N;
	for(int i=0;i<N;i++)
	{
	//new parcel;
	cout<<"\nDonner le poids: ";
	cin>>parcel.weith;
	cout<<"\nDonner la date d'envoi :";
	cin>>parcel.send_date;	
	cout<<"\nDonner la destination:";
	cin>>parcel.send_date;		
	}

	for(int i=0;i<N;i++)
	{
	cout<<"Le poids:"<<;
	cout<<"\nDonner la date d'envoi :";
	cout<<"\nDonner la destination:";	
	}
	getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
	system("pause");
	return 0;
}
