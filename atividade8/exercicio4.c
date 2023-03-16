#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//varias manipulacao com str
int main(void)
{
    int valor;
    char c[20];
    char str2[20];
    char invertida[20];
    char car[2];
    int resultado;

    printf("Digite um valor de 1 a 9: ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        printf("digite uma palavra: ");
        scanf("%s", &c);
        printf("%s", c);

        break;

    case 2:
        printf("digite uma palavra: ");
        scanf("%s", &c);
        printf("o tamanho da palvavra é: %d", strlen(c));
        break;

    case 3:
        printf("digite uma palavra: ");
        scanf("%s", &c);
        printf("digite a segunda palavra: ");
        scanf("%s", &str2);
        resultado = strcmp(c, str2);
        printf("%d", resultado);
        break;

    case 4:
        printf("digite uma palavra: ");
        scanf("%s", &c);
        printf("digite a segunda palavra: ");
        scanf("%s", &str2);
        strcat(c, str2);
        printf("\n concatenacao da palavra:\t%s\n", c);
        break;

    case 5:
        printf("digite uma palavra: ");
        scanf("%s", &c);
        int j = 0;
        for (int i = strlen(c) - 1; i >= 0; i--)
        {
            invertida[j] = c[i];
            j += 1;
        }

        invertida[j] = '\0';
        printf("\n palavra invertida:\t%s\n", invertida);

        break;
    

    case 6:
        printf("digite uma palavra: ");
        scanf("%s", c);

        printf("Insira o caracter: ");
        scanf("%s", car);
        int i;
        int n = 0;

        for (i = 0; c[i] != '\0'; i++)
        {
        if (c[i] == car[0])
        {
            n = n + 1;
        }
        }
        printf("O caracter aparece %d vezes\n", n);
        break;



        
    }


    return 0;
}