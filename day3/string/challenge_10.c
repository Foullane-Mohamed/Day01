// Challenge 9 : Suppression des Espaces
// Écrivez un programme C qui lit une chaîne de caractères
// et supprime tous les espaces. Affichez la chaîne résultante.

#include <stdio.h>
#include <string.h>

int main(){


    char chaine_e_caracteres[100];
   printf("Saiser votre chaine de caracteres : ");
    gets(chaine_e_caracteres);

    for (int i = 0; chaine_e_caracteres[i] != '\0'; i++)
    {
        if (chaine_e_caracteres[i] !=' ')
        {
            printf("%c",chaine_e_caracteres[i]);
        }
        
    }
   



    return 0;
}