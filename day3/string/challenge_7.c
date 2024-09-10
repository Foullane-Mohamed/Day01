// Challenge 7 : Conversion en Majuscules
// Écrivez un programme C qui lit une chaîne de caractères 
// et convertit tous les caractères en majusc00ules. Affichez la chaîne modifiée.

#include <stdio.h>
#include <string.h>

int main(){


    char chaine_e_caracteres[100];
   printf("Saiser votre chaine de caracteres : ");
    gets(chaine_e_caracteres);

    for (int i = 0; chaine_e_caracteres[i] != '\0'; i++)
    {
        if (chaine_e_caracteres[i] >= 'a' && chaine_e_caracteres[i] <= 'z')
        {
            chaine_e_caracteres[i] = chaine_e_caracteres[i]-32;
        }
        
    }
    printf("Majuscule est : %s", chaine_e_caracteres);



    return 0;
}