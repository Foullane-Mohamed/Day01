// Challenge 8 : Calcul de la moyenne géométrique
// Écrivez un programme en C pour trouver la moyenne géométrique
//  de trois nombres saisis par l'utilisateur. Formule :


#include <stdio.h>
#include <math.h>

int main(){
 int nombre_1 , nombre_2 ,nombre_3 ,moyenne_geometrique; 
  printf("saiser le nombre 1: ");
  scanf("%d",&nombre_1 );
  printf("saiser le nombre 2 : ");
  scanf("%d",&nombre_2 );
  printf("saiser le nombre 3 : ");
  scanf("%d",&nombre_3 );



moyenne_geometrique = pow((nombre_1 * nombre_2 * nombre_3),1/3);

printf("la moyenne geometrique est : %d ",moyenne_geometrique);

  return 0;
}