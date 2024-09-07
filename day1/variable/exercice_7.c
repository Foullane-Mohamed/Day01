// Challenge 7 : Moyenne pondérée de trois nombres
// Écrivez un programme en C pour calculer 
// la moyenne pondérée de trois nombres donnés
//  par l'utilisateur avec les pondérations suivantes :

#include <stdio.h>

int main(){
 float nombre_1 , nombre_2 ,nombre_3 ,moyenne; 
  printf("saiser le nombre 1: ");
  scanf("%f",&nombre_1 );
  printf("saiser le nombre 2 : ");
  scanf("%f",&nombre_2 );
  printf("saiser le nombre 3 : ");
  scanf("%f",&nombre_3 );

nombre_1 *=2;
nombre_2 *= 3;
nombre_3 *= 5;

moyenne = (nombre_1 + nombre_2 + nombre_3)/10;

printf("la Moyenne est : %.2f ",moyenne);

  return 0;
}