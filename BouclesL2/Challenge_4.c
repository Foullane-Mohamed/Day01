#include <stdio.h>

int main() { 
 #include <stdio.h>

int main(){
    int size;
    printf("Saiser  le nombre delements dun tableau : ");
    scanf("%d",&size);

    int tableau[size];

    for(int i=0;i<size ;i++){
        printf("Saiser  %i elements du tableau : " ,i+1);
        scanf("%d",&tableau[i]);
     
       
    }
    for(int i=0;i<size ;i++){
       
     
        printf("valure %d : %d \n", i+1, tableau[i]);
    }
   

    return 0;
}
    return 0; 
} 