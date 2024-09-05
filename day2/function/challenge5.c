#include <stdio.h>
int factorielle(int a);

int main() {
   int nombre;
    printf("Saiser un nombre : ");
    scanf("%d",&nombre);
   ;

    printf("le factorielle nombre %d est : %d" ,nombre, factorielle(nombre));
    

    return 0;
}
int factorielle(int a){
    int somme = a;
    for (int i = 1; i <= a; i++){
      somme *= i;
    }

    return somme;
   
}