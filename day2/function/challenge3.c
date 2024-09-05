#include <stdio.h>
int multi(int a, int b){
    if(a>b) return a;
    else if(a<b) return b ;
}
int main() {
   int nombre1,nombre2;
    printf("Saiser le premiere nombre : ");
    scanf("%d",&nombre1);
    printf("Saiser le dexieme nombre : ");
    scanf("%d",&nombre2);

    printf("le blus grand nombre est : %d" , multi(nombre1,nombre2));
    

    return 0;
}