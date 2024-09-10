#include <stdio.h>
#include <string.h>

typedef struct
{
    char nom[100];
    int telephone[100];
    char email[50];
} carnet;
int choix, count = 0;
carnet contact[100];
void ajouter();
void modifier();
void affichage();
void rechercher();

int main()
{

    do
    {
        printf("Saiser un nombre : \n");
        printf(" \n");
        printf("1 : Ajouter un Contact : \n");
        printf("2 : Modifier un Contact: \n");
        printf("3 : Supprimer un Contact : \n");
        printf("4 : Afficher Tous les Contacts : \n");
        printf("6 : Rechercher un Contact : \n");

        printf("entrez votre choix : ");
        scanf("%d", &choix);
        printf("_____________________________________________________________________\n");
        switch (choix)
        {
        case 1:
            ajouter();
            break;
        case 2:
            modifier();
            break;
        case 4:
            affichage();
            break;
        case 5:
            rechercher();
            break;
        }
    } while (choix != 7);
}
void print_liste(int i)
{

    printf("     [ contact %d ] \n", i + 1);
    printf("nom       : %s\n", contact[i].nom);
    printf("telephone  : %d\n", contact[i].telephone);
    printf("l_emeil    : %s\n", contact[i].email);
    printf("_____________________________________________________________________\n");
}
char damande_print(char new_nom[100])
{
    char new_nom[100];
    printf("Siser un titre de livre :");
    scanf("%s", new_nom);
    return new_nom;
}
void print_ajouter(int x)
{
    printf("Saiser le nom de contact : ");
    scanf("%s", contact[x].nom);
    printf("Saiser numero de telephone : ");
    scanf("%d", &contact[x].telephone);
    printf("Saiser l_email : ");
    scanf("%s", contact[x].email);
}
void ajouter()
{
    print_ajouter(count);

    count++;
}
void affichage()
{
    printf("_____________________________________________________________________\n");
    for (int i = 0; i < count; i++)
    {
        print_liste(i);
    }
    printf("_____________________________________________________________________\n");
}

void rechercher()
{
    char new_nom[100];
    damande_print(new_nom);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(contact[i].nom, new_nom) == 0)
        {
            printf("_____________________________________________________________________\n");
            print_liste(i);
            printf("_____________________________________________________________________\n");
        }
    }
}

void modifier()
{
    char new_nom[100];
    damande_print(new_nom);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(contact[i].nom, new_nom) == 0)
        {
           print_ajouter(i);
        }
    }
}