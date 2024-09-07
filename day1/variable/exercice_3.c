//Challenge 3 : Conversion de la distance
//Écrivez un programme qui demande la distance 
//en kilomètres et la transforme en yards. Formule 

#include <stdio.h>

int main(){
  
  int distance  ;
  float yards;
  printf("saiser la distance  : ");
  scanf("%d",&distance );
  
yards = distance  + 1093.61;
  printf("  result en yards est : %.2f",yards);

  return 0;
}