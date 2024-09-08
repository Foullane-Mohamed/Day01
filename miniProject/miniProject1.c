#include <stdio.h>
#include <string.h>

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
  
  
    printf("_____________________________________________________________________\n");
    for (int i = 0; i < count; i++)
    {

      printf(" livre nombre %d  : | titre : %s | auteur : %s  | prix : %d | quantite : %d | \n", i + 1, stock[i].titre, stock[i].auteur, stock[i].prix, stock[i].quantite);
      printf("_____________________________________________________________________\n");
    }
  
}

void rechercher()
{
  char new_titre[100];
  printf("Siser un titre de livre pour rechercher :");
  scanf("%s", new_titre == 0);
  for (int i = 0; i < count; i++)
  {
    if (strcmp(stock[i].titre, new_titre))
    {
      printf(" livre nombre %d  : | titre : %s | auteur : %s  | prix : %d | quantite : %d | \n", i + 1, stock[i].titre, stock[i].auteur, stock[i].prix, stock[i].quantite);
    }
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
    else if (nombre == 2)
    {
      affichage();
    }
    else if (nombre == 3)
    {
      rechercher();
    }
  } while (nombre != 7);

  return 0;
}