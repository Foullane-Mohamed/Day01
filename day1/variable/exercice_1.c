//Écrivez un programme en C qui va permettre 
//d'afficher vos informations personnelles : 
//nom, prénom, âge, sexe, et adresse email. 
//Les données sont saisies à partir du clavier.

#include <stdio.h>

int main(){
  char prenom[50] , nom[50] ,sexe[50];
  int age ;
  printf("saiser votre nom : ");
  scanf("%s",&nom);
  printf("saiser votre prenom : ");
  scanf("%s",&prenom);
  printf("saiser votre sexe : ");
  scanf("%s",&sexe);
  printf("saiser votre age : ");
  scanf("%d",&age);

  printf("votre nom est : %s",nom);
  printf("votre prenom est : %s",prenom);
  printf("votre sexe est : %s",sexe);
  printf("votre age est : %d",age);

  return 0;
}