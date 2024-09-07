// Challenge 5 : Affichage Température
// Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau
//  à cette température (solide, liquide, gaz). Règle 

#include <stdio.h>

int main(){
  
  float temperature_en_Celsius;
 
  printf("saiser la temperature en Celsius   : ");
  scanf("%d",&temperature_en_Celsius  );
  
if (temperature_en_Celsius < 0)
{
   printf("  l'état de l'eau est : Solide");
}else if(temperature_en_Celsius>=0 && temperature_en_Celsius <100 ) {
  printf("  l'état de l'eau est : Liquide");
}else if (temperature_en_Celsius>= 100){
  printf("  l'état de l'eau est : Gaz");
}



  return 0;
}