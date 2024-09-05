#include <stdio.h>

int main()
{
    int numEl = 0;
    int tableu[100];
    int factorialNum;
    printf("Saiser a factorial number: ");
    scanf("%d", &factorialNum);

    printf("\nenter a number of elements : ");
    scanf("%d", &numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("\n Saiser nombre %d: ", i + 1);
        scanf("%d", &tableu[i]);
    }

    for (int i = 0; i < numEl; i++)
    {
        printf("%d ", tableu[i] * factorialNum);
    }

    return 0;
}