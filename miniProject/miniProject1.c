#include <stdio.h>

typedef struct
{
    char titre[100];
    char auteur[100];
    int prix;
    int quantite;
} livres;

int nombre, count = 0;
livres stock[100];

void ajouter()
{

    printf("Saiser le titre de livre : ");
    scanf("%s", stock[count].titre);
    printf("Saiser le auteur de livre : ");
    scanf("%s", stock[count].auteur);
    printf("Saiser le prix de livre : ");
    scanf("%d", &stock[count].prix);
    printf("Saiser le quantite de livre : ");
    scanf("%d", &stock[count].quantite);
    count++;
}
void affichage()
{
    if (nombre == 6)
    {
        printf("_____________________________________________________________________\n");
        for (int i = 0; i < count; i++)
        {

            printf(" livre nombre %d  : | titre : %s | auteur : %s  | prix : %d | quantite : %d | \n", i + 1, stock[i].titre, stock[i].auteur, stock[i].prix, stock[i].quantite);
            printf("_____________________________________________________________________\n");
        }
    }
}
void supprimer()
{
    int nombre_livre;
    printf("Saiser le nombre de livre pour supprimer : \n");
    for (int i = 0; i < count; i++)
    {
    }
}

int main()
{
    printf("_____________________________________________________________________\n");
    do
    {
        printf("Saiser un nombre : \n");
        printf(" \n");
        printf("1 : Ajouter un livre au stock : \n");
        printf("2 : Afficher tous les livres disponibles : \n");
        printf("3 : Rechercher un livre par son titre : \n");
        printf("4 : Mettre à jour la quantité d'un livre : \n");
        printf("5 : Supprimer un livre du stock : \n");
        printf("6 : Afficher le nombre total de livres en stock : \n");

        printf("entrez votre choix : ");
        scanf("%d", &nombre);
        printf("_____________________________________________________________________\n");
        if (nombre == 1)
        {
            ajouter();
        }
        else if (nombre == 6)
        {
            affichage();
        }
    } while (nombre != 7);

    return 0;
}