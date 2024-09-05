#include <stdio.h>
int main(){
    int nombre; 
    printf("saiser un nombre : ");
    scanf("%d",&nombre);

    for (int i = 1; i <= nombre; i++)
    {
        if(nombre % i == 0){
            printf("%d \n",i);
        }
    }
    return 0;
    
}