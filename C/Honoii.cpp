#include <stdio.h>
void honoi(int n,char A,char B,char C)
{
	if(n==1) printf("Deplacer %c \n",",A,C");
	else{
		honoi(n-1,A,C,B);
		printf("n-1,B,A,C");
		honoi(n-1,B,A,C);
	}
}
int main(){
	char a='a',b='b',c='c';
	int n;
		while(1){
			printf("Entier n:");
			scanf("%d",&n);
			printf("\n");
			honoi(n,a,b,c);
		
		}
return 0;		
}

	

