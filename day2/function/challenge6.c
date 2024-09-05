#include <stdio.h>

int Fibonacci(int n)
{
    
    if (n==0 || n==1)
        return n;
    else
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
    
    int nombre, fib;

    printf("Saiser un nombre : ");
    scanf("%d", &nombre);

    if (nombre<=1){
      printf("erreur, la factorielle est negatif");
    }
    else {
      fib=Fibonacci(nombre);
      printf("Fibonacci de %d est : %d", nombre, fib);
}

    return 0;
}

