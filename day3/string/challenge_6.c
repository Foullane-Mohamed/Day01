// Challenge 6 : Compte des Occurrences d'un Caractère
// Écrivez un programme C qui lit une chaîne de caractères et un caractère,
//  puis compte et affiche combien de fois le caractère apparaît dans la chaîne.

#include <stdio.h>
#include <string.h>

int main()
{
    char chaine_e_caracteres[100];
    char caracteres;
    int result=0;
    printf("Saiser votre chaine de caracteres : ");
    gets(chaine_e_caracteres);
    printf("Siser un caracteres");
    scanf("%s"),&caracteres;

     for(int i = 0; i<100; i++)  
    {
    	if(chaine_e_caracteres[i] == caracteres)
    	{
          result++;
        }
    }
    printf(" le caractere apparait dans la chaine est : %d",result);
    return 0;
}