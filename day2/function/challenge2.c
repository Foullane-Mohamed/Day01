#include <stdio.h>
int multi(int a, int b);

int main() {
   int nombre1,nombre2;
    printf("Saiser le premiere nombre : ");
    scanf("%d",&nombre1);
    printf("Saiser le dexieme nombre : ");
    scanf("%d",&nombre2);

    printf("la multiplication de a et b est : %d" , multi(nombre1,nombre2));
    

    return 0;
}

int multi(int a, int b){
    return a*b;
}