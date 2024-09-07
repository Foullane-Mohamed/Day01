// Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
// Écrivez un programme C pour trouver la distance entre deux points
//  donnés dans un espace 3D. Formule 


#include <stdio.h>
#include <math.h>

int main(){
 int point_1 , point_2 , point_3,espace_3D ; 
  printf("saiser le nombre 1: ");
  scanf("%d",&point_1 );
  printf("saiser le nombre 2 : ");
  scanf("%d",&point_2 );
  printf("saiser le nombre 3 : ");
  scanf("%d",&point_3 );




espace_3D  = square( pow(point_2 - point_1 ,2) + pow(point_2 - point_1 ,2) + pow(point_3 - point_3 ,2));

printf("l'espace 3D  est : %d ",espace_3D );

  return 0;
}