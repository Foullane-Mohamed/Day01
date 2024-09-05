#include <stdio.h>

int main()
{
    int numEl = 0;
    int tableux[100];
    printf("Saiser a nombre des elements : ");
    scanf("%d", &numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("\n Saiser a nombre  %d:", i + 1);
        scanf("%d", &tableux[i]);
    }

    for (int i = 0; i < numEl; i++)
    {
        printf("%d ", tableux[i]);
    }

    return 0;
}