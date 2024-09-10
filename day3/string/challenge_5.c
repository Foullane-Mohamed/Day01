// Challenge 5 : Inversion de Chaîne
// Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée. 
// Par exemple, si la chaîne est "abcd", le programme doit afficher "dcba".

#include <stdio.h>
#include <string.h>

int main(){
    char chaine_e_caracteres[100] ;
    printf("Saiser votre chaine de caracteres : ");
    gets(chaine_e_caracteres);

    printf("%s",strrev(chaine_e_caracteres));

    return 0;
}