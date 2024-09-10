// Challenge 4 : Comparaison de Chaînes
// Écrivez un programme C qui lit deux chaînes de caractères
//  et compare si elles sont égales ou non.
//   Affichez un message indiquant si les chaînes sont égales ou différentes.


#include <stdio.h>
#include <string.h>

int main(){

    char chaine_caracteres_1[100];
    char chaine_caracteres_2[100];

    printf("Siser votre chaine de caracteres : ");
    
    scanf("%[^\n]s", &chaine_caracteres_1);

    printf("Siser votre chaine de caracteres : ");
    scanf("%[^\n]s", &chaine_caracteres_2);

if(strcmp(chaine_caracteres_1,chaine_caracteres_2)==0){
     printf("les chaînes sont égales ");
}else{
    printf("les chaînes sont différentes");
}

   

    return 0;
}
