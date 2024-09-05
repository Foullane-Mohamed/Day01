#include <stdio.h>
int petit_nombre(int a, int b);

int main() {
   int nombre1,nombre2;
    printf("Saiser le premiere nombre : ");
    scanf("%d",&nombre1);
    printf("Saiser le dexieme nombre : ");
    scanf("%d",&nombre2);

    printf("le blus petit nombre est : %d" , petit_nombre(nombre1,nombre2));
    

    return 0;
}

int petit_nombre(int a, int b){
    if(a<b) return a;
    else if(a>b) return b ;
}