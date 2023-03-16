#include <stdio.h>
#include <string.h>

int main()
{
    char matriz[5][100];
    char eliminado[100];
    int econ = 0;

    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite um nome \n");

        scanf("%s", &matriz[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n%s", matriz[i]);
    }
    printf("\ndigite o nome a se eliminado? ");
    scanf("%s", &eliminado);

    for (i = 0; i < 5; i++)
    {
        if (strcmp(eliminado, matriz[i]) == 0)
        {
            matriz[i][0] = '\0';
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n %s ", matriz[i]);
    }
}