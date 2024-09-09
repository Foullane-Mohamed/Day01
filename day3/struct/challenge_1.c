// Challenge 1 : Définition et Utilisation de Structure
// Écrivez un programme C qui définit une structure
// pour représenter une personne avec les champs
//  nom, prenom, et age. Créez une variable de cette structure,
// assignez des valeurs aux champs, et affichez ces valeurs.

#include <stdio.h>
typedef struct
{
    char nom[100];
    char prenom[100];
    int age;
}persons;
 persons person_1;
int main()
{

    printf("saisir le nom:");
    scanf("%s",&person_1.nom);
    printf("saisir le prenom:");
    scanf("%s",&person_1.prenom);
    printf("saisir l'age:");
    scanf("%d", &person_1.age);
    printf("le nom est : %s\n le prenom est :%s \n l'age est : %d ", person_1.nom, person_1.prenom, person_1.age);
    return 0;
}
