#include <stdio.h>

int main()
{
    int result = 0;
    int numEl = 0;
    int tableux[100];
    printf("Saiser a nombre of elements : ");
    scanf("%d", &numEl);
    for (int i = 0; i < numEl; i++)
    {
        printf("\n enter nombre %d: ", i + 1);
        scanf("%d", &tableux[i]);
    }
    for (int i = 0; i < numEl; i++)
    {
        result += tableux[i];
    }
    printf("le resulte est : %d", result);

    return 0;
}