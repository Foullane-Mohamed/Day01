// Challenge 10 : Trouver un Sous-String
// Écrivez un programme C qui lit une chaîne de caractères
// principale et une sous-chaîne, puis vérifie si la sous-chaîne
// est présente dans la chaîne principale. Affichez un message
// indiquant si la sous-chaîne est trouvée ou non.

#include <stdio.h>
#include <string.h>
int main()
{

    char chaine_e_caracteres[100];
    char new_chaine_e_caracteres[100];
    printf("Saiser votre chaine de caracteres : ");
    gets(chaine_e_caracteres);
    printf("Saiser votre new chaine de caracteres : ");
    gets(new_chaine_e_caracteres);

   
        if (strcmp(chaine_e_caracteres, new_chaine_e_caracteres) != 0 )
        {
            printf("%c", chaine_e_caracteres[i]);
        }
    

    return 0;
}
