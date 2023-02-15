#include <stdio.h>

int main(void)
{
    char matriz[5][4][100];
    int vetConsumo[5];
    int econ = 0;

    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%s", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\n elementos = %s\n", matriz[i][j]);
        }
    }
}