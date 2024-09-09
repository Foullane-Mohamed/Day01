// Challenge 2 : Structure avec Tableau
// Écrivez un programme C qui définit une structure pour représenter un étudiant
//  avec les champs nom, prenom, et un tableau d'entiers pour stocker les notes.
//   Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'étudiant.
int size_note;
typedef struct
{
    char nom[100];
    char prenom[100];
    int note[100];
} persons;
persons person;
int main()
{

    printf("saisir le nom:");
    scanf("%s", &person.nom);
    printf("saisir le prenom:");
    scanf("%s", &person.prenom);
    printf("Siser combien de note vous entre : ");
    scanf("%s", &size_note);
    for (int i = 0; i < size_note; i++)
    {
        printf("Siser le note nombre %s", i + 1);
        scanf("%d", &person.note[i]);
    }

    printf("le nom est : %s\n le prenom est :%s \n", person.nom, person.prenom);
    for (int i = 0; i < size_note; i++)
    {
        printf("les notes est : %d\n", person.note[i]);
    }

    return 0;
}