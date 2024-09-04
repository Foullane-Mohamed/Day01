#include <stdio.h>
    
    int main() {
        int nombre; 
    
        printf("Saiser un nomber : "); 
        scanf("%d", &nombre);
        int inverse = 0; 
        while (nombre > 0) { 
            inverse = inverse * 10 + nombre % 10; 
            nombre /=  10;
    
        }
        printf("%d",inverse);
            
        return 0;
    }