#include <stdio.h>

int main()
{
    int numEl = 0;
    int tableux[100];

    printf("Saiser a nombre des elements : \n");
    scanf("%d", &numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("Saiser nombre %d:\n", i + 1);
        scanf("%d", &tableux[i]);
    }
    int lePlusGrand = tableux[0];
    for (int i = 0; i < numEl; i++)
    {
        if (lePlusGrand > tableux[i])
        {
            lePlusGrand = tableux[i];
        }
    }

    printf("le plus petit element est %d", lePlusGrand);
    return 0;
}