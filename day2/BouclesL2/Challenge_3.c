#include <stdio.h>
int main(){
    int nombre;
    printf("saiser un nombre : ");
    scanf("%d",&nombre);

    for(int i = 2; i <= nombre ; i++){
        int test = 1;
        for(int j =2; j<i ; j++){
            if(i % j == 0){
                test = 0;
               
            }
        }
        if(test == 1){
            printf("%d \n",i);
        }
    }

    return 0;
}