// #include <stdio.h>

// int main() { 
//     int entier_n ; 
 
//     printf("Saiser un  entier n : "); 
//     scanf("%d", &entier_n); 
 
//     for(int i=2; i<=entier_n; i++) { 
//         int nombre_premier = 1;
 
//         for(int j=2; j<i; j++) { 
//             if(i % j == 0) { 

//                 nombre_premier = 0; 
//                 break; 
//             } 
//         } 

//         if(nombre_premier == 1) { 
//             printf("%d ", i); 
//         } 
//     } 
 
//     return 0; 
// } 


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
                breakl;
            }
        }
        printf("%d \n",i);
    }

    return 0;
}