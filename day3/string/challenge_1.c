// Challenge 1 : Affichage d'une Chaîne
// Écrivez un programme C qui lit 
// une chaîne de caractères entrée par l'utilisateur et l'affiche à l'écran.



#include <stdio.h>
#include <string.h>

int main(){
   
    char chaine_caracteres[100];
    printf("Siser votre chaine de caracteres : ");
    scanf("%[^\n]s",&chaine_caracteres);
    printf("\n %s \n",chaine_caracteres);
    return 0;
}