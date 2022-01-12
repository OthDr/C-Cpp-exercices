
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int a,b,c;
    int delta;
    float x1,x2;
     
    printf("Entrez A different de 0: ");
    scanf("%d",&a);
    printf("Entrez B: ");
    scanf("%d",&b);
    printf("Entrez C: ");
    scanf("%d",&c);
    printf("Vous voulez donc resoudre l'equation %dx%c+%dx+%d=0\n",a,253,b,c);
    delta = b*b-4*a*c;
    printf("%c = %d\n",127,delta);
     
    if(delta<0)
    {
    printf("L'equation n'admet aucune solution reelle\n");
    }
    else if(delta==0)
    {
    x1 = b/(-2*a);
    printf("L'equation admet une solution qui est %.2f \n",x1);
    }
    else
    {
    x1= (-b-sqrt(delta))/2*a;
    x2= (-b+sqrt(delta))/2*a;   
    printf("L'equation admet deux solutions qui sont %.2f et %.2f\n",x1,x2);
    }
  return 0;
}


