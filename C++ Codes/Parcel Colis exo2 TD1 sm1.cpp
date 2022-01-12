#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

	struct date
	{
		int day;
		int month;
		int year;
	};
	struct PARCE
	{
		float weight;
		string destination;
		date send_date;
		bool situation;
	};
	
int main(){

	int n;
	struct PARCE parcel[50];
	char yesno;
	
	cout<<"\n  Please insert the number of Parcels:";
	cin>>n;
	//PARCE *parcel=new parcel[n];
	for(int i=0;i<n;i++){
		cout<<"==========================================================================\n\t\t\t\tParcel number:"<<i+1;
		cout<<"\n\t\tPlease tape the weight:";
		cin>>parcel[i].weight;
		cout<<"Please input the destination of this parcel:";
		//cin>>parcel[i].destination;cin.ignore();
		getline(cin, parcel[i].destination);
		cout<<"\n\t\tPlease put the day that the parcel was send in:";
		cin>>parcel[i].send_date.day;
		cout<<"\t\tPlease put the month that the parcel was send in:";
		cin>>parcel[i].send_date.month;
		cout<<"\t\tPlease put the year that the parcel was send in:";
		cin>>parcel[i].send_date.year;
		cout<<"\n\t*****Please tape 'y' if the parcel is seccusfully sent:";
		cin>>yesno;
		if(yesno=='y'||yesno=='Y')
			parcel[i].situation=true;
		else 
			parcel[i].situation=false;	
	}
	for(int i=0;i<n;i++){
		cout<<"\n----------------------------------------------------------------------\n\n\n\tThese are the full informations of the parcel number:"<<i+1;
		cout<<"\n\tWeight is :"<<parcel[i].weight;
		cout<<"\n\tThe destination of this parcel :"<<parcel[i].destination;
		cout<<"\n\tDate of send:"<<parcel[i].send_date.day<<"-"<<parcel[i].send_date.month<<"-"<<parcel[i].send_date.year;
		if(parcel[i].situation==true)
		cout<<"\n\tThe parcel have been sent.";
		else 
		cout<<"\n\tThe parcel have not been sent.\n";
	}
//	system("pause");
	getchar();getchar();getchar();getchar();getchar();getchar();
return 0;}
