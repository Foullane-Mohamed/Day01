// Challenge 8 : Conversion en Minuscules
// Écrivez un programme C qui lit une chaîne de caractères et convertit tous les caractères 
// en minuscules. Affichez la chaîne modifiée.
#include <stdio.h>
#include <string.h>

int main(){


    char chaine_e_caracteres[100];
   printf("Saiser votre chaine de caracteres : ");
    gets(chaine_e_caracteres);

    for (int i = 0; chaine_e_caracteres[i] != '\0'; i++)
    {
        if (chaine_e_caracteres[i] >= 'A' && chaine_e_caracteres[i] <= 'Z')
        {
            chaine_e_caracteres[i] = chaine_e_caracteres[i]+32;
        }
        
    }
    printf("minuscules est  : %s", chaine_e_caracteres);



    return 0;
}