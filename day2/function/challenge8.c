#include <stdio.h>
int somme(int a);
int main() {
   int nombre ;
    printf("Saiser un nombre : ");
    scanf("%d",&nombre);
  

    printf("%d",somme(nombre));
    

    return 0;
}

int somme(int a){
    if(a%2 == 0) return 1;
    else return 0;
}