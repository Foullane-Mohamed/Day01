#include <stdio.h>
    
    int main() {
        int nombre  ;
        printf("Saiser un nombre : ");
        scanf("%d",&nombre);

 
        

        for(int i = 1; i< nombre ; i++){
            if( nombre % i == 0 ){

            printf("%d ",i);
            }
        }


        return 0;
    }