#include <stdio.h>
int factorielle(int a){
    int somme = a;
    for (int i = 1; i <= a; i++){
      somme *= i;
    }

    return somme;
   
}
int main() {
   int size;
    printf("Saiser le size de tableaux : ");
    scanf("%d",&size);
    int tableaux[size];
    for (int i = 0; i < tableaux; i++){
        printf("Saiser le %d element de tableaux : ");
        scanf("%d",tableaux[i]);
    }
    printf("{");
    for (int i = size; i > 0; i++){
        printf("%d , ",tableaux[i]);
    }
    printf("}");
    

    return 0;
}