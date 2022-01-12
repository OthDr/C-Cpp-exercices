/* Source crée avec dev-c++ v 4.01 */
/* prog from : TeTsUo                            */
/* name : fonction_3deg                          */
/* description : calcul d'équation du 3ème degré */
/* copyright : free                              */

/* Résolution d'une équation du troisième degré. */

#include <stdio.h>
#include <math.h>

/* Variables. */

float a, b, c;
float x, x1, x2;
float z;

/* Fonctions. */

int calc_fonc(void);
int sup_zero(void);
int inf_zero(void);
int ega_zero(void);

/* programme. */

main()
{
   printf("\n[*****Programme made OTMAX-84 aka Oth vft  *****]");
   
   printf("\n\nCe programme resoud une equation du troisieme degre");
   
   printf("\nDu type ax+bx+c=0");
   
   printf("\n\nEntrez la valeur de a: ", a);
      scanf("%f", &a);
   
   printf("\n\nEntrez la valeur de b: ", b);    
      scanf("%f", &b);
   
   printf("\n\nEntrez la valeur de c: ", c);
      scanf("%f", &c);
   
    calc_fonc();
    
   if ( z > 0 )
   {
     sup_zero();
   }
   else if ( z < 0 )
   {
     inf_zero();
   }  
   else
   {
     ega_zero();
   }    
}
int calc_fonc(void)
{
   z = ( b * b ) -( 4.0 * ( a * c ) );
   printf("\nLe resultat du calcul est %.2f", z);
}
int sup_zero(void)
{
   x1 = ( ( - b ) + ( sqrt ( z ) ) ) / ( 2 * a );
   x2 = ( ( - b ) - ( sqrt ( z ) ) ) / ( 2 * a ); 
   printf("\n\nLe resultat de l'operation est %.2f %.2f", x1, x2);
}
int inf_zero(void)
{
   printf("\n\nPas de solutions!");
   
   return 0;
}
int ega_zero(void)                            
{       
   x = ( -b ) / ( 2 * a );
   printf("\n\nLa seule solution est %.2f", x);
}
