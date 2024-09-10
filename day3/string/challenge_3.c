// Challenge 3 : Concaténation de Chaînes
// Écrivez un programme C qui lit deux chaînes de caractères
// et les concatène en une seule chaîne. Affichez la chaîne résultante.


#include <stdio.h>
#include <string.h>

int main()
{

    char chaine_caracteres_1[100];
    char chaine_caracteres_2[100];

    printf("Siser votre chaine de caracteres : ");
    scanf("%[^\n]s", &chaine_caracteres_1);

    printf("Siser votre chaine de caracteres : ");
    scanf("%[^\n]s", &chaine_caracteres_2);

    strcat(chaine_caracteres_1, chaine_caracteres_2);
    printf("%s", chaine_caracteres_1);

    return 0;
}