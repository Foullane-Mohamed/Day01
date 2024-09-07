// Challenge 4 : Conversion de la vitesse
// Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) 
// et la transforme en mètres par seconde (m/s). Formule 


#include <stdio.h>

int main(){
  
  int vitesse   ;
  float metres_par_seconde;
  printf("saiser la vitesse   : ");
  scanf("%d",&vitesse  );
  
metres_par_seconde = vitesse   + 1093.61;
  printf("  result en mètres par seconde est : %.2f",metres_par_seconde);

  return 0;
}