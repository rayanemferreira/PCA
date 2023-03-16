#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char c[50];
    char invertida[50];
    int resultado;

    printf("digite uma palavra: ");
        scanf("%s", &c);
        int j = 0;
        for (int i = strlen(c) - 1; i >= 0; i--)
        {
            invertida[j] = c[i];
            j += 1;
        }

        invertida[j] = '\0';
        printf("palavra invertida: %s\n", invertida);

        resultado = strcmp(c, invertida);
        printf(" valor: %d \n", resultado);

        if (resultado==0)
        {
            printf("esta frase é um palíndromo");
        }
        
}