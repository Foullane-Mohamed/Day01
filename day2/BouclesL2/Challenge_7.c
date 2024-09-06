#include <stdio.h>

int Fibonacci(int nombre)
{
    
    if (nombre==0 || nombre==1)
        return nombre;
    else
    return Fibonacci(nombre-1)+Fibonacci(nombre-2);
}

int main(){
    
    int nombre, fib;

    printf("Saiser un nombre : ");
    scanf("%d", &nombre);

    if (nombre<1){
      printf("erreur, la factorielle est negatif");
    }
    else {
      fib=Fibonacci(nombre);
      printf("Fibonacci de %d est : %d", nombre, fib);
}

    return 0;
}

