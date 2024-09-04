#include <stdio.h>

int main() {
    int nombre;

    printf("Saiser un nombre : ");
    scanf("%d",&nombre);
    
    for(int i = 10 ; i> 0 ;i--){
        printf("%d * %d = %d \n",nombre , i , nombre * i);
    }

    return 0;
}