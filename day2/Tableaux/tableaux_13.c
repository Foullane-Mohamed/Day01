#include <stdio.h>
#include <stdio.h>
int main() {
   int size;
    printf("Saiser le size de tableaux : ");
    scanf("%d",&size);
    int tableaux[size];
    for (int i = 0; i < size; i++){
        printf("Saiser le %d element de tableaux : ",i+1);
        scanf("%d",&tableaux[i]);
    }
    
    for (int i = 0; i < size; i++){
        if(tableaux[i]%2 != 0){
            printf(" le nombre  %d est impair \n",tableaux[i]);
        }
        
    }
    
    

    return 0;
}