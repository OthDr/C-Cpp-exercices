#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void maj(char *mj){
int i,x;
system("cls");//vider les variables
x=strlen(mj);
x=x-1;
for(i=0;i<x;i++)
{
mj[i]=toupper(mj[i]);}	
printf("%s \n",mj);
}

int main ()
{
char *m;
	
printf("Sasir la chaine:");
gets(m);
maj(m);


return 0;	
}
