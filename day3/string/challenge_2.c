// Challenge 2 : Longueur de la Chaîne
// Écrivez un programme C qui calcule et affiche 
// la longueur d'une chaîne de caractères sans utiliser la fonction strlen().

#include <stdio.h>
#include <string.h>

int main(){
     char chaine_caracteres[100];
     int count =0;
    printf("Siser votre chaine de caracteres : ");
    scanf("%[^\n]s",&chaine_caracteres);
    for(int i=0; chaine_caracteres[i]!='\0'; i++)
    {
        count++; 
    }
    printf("la longueur d'une chaîne de caractères est : %d",count);

    return 0 ;
    
}