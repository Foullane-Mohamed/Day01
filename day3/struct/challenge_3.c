// Challenge 3 : Passage de Structure en Argument
// Écrivez un programme C qui définit une structure
// pour représenter un rectangle avec les champs longueur et largeur.
// Écrivez une fonction qui prend une variable de cette structure en argument et calcule l'aire du rectangle.
// Affichez l'aire dans le programme principal.
#include <stdio.h>

typedef struct
{

    int longueur;
    int largeur;
} rectangle;
rectangle laire;

int main()
{
    printf("Siser le longeur de rectangle : ");
    scanf("%d",&laire.longueur);
    printf("Siser le longeur de largeur : ");
    scanf("%d",&laire.largeur);
    printf("\n laire de rectangle est : %d",laire.longueur *laire.largeur);

    return 0;
}