#include <stdio.h>		
int main ()
{
float al,an,st,ajb,ph,en,tr,myn;	

printf("Algo:");	
scanf("%f",&al);

printf("Stmch:");	
scanf("%f",&st);

printf("Ana1:");	
scanf("%f",&an);

printf("Algeb:");	
scanf("%f",&ajb);

printf("phy:");	
scanf("%f",&ph);

printf("Eng:");	
scanf("%f",&en);

printf("Trm:");	
scanf("%f",&tr);

myn=((((3*ajb)+(4*an)))+(((3*st)+(4*al)))+(ph*2)+en+tr)/18;

printf("*****************************************************************\n\n----------------------La Moenne=%.2f.----------------------------*****************************************************************\n\n\n\n\n",myn);
return 0;
}
