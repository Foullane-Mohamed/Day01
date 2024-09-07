// Challenge 10 : Volume d'une sphère
// Écrivez un programme pour trouver le volume
//  d'une sphère. Prenez le rayon de la sphère en entrée 
// de l'utilisateur. Formule pour le volume d'une sphère 


#include <stdio.h>
#include <math.h>

int main(){
 float rayon_de_sphere , volume  ; 
  printf("saiser le rayon de la sphère 1: ");
  scanf("%f",&rayon_de_sphere );


 
 volume = (4/3) *3.14 * pow(rayon_de_sphere,3);





printf("le volume d'une sphère  est : %.2f ",volume );

  return 0;
}