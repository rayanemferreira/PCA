#include <stdio.h>
#include <string.h>
void verposicao(char a[],char b[])
{
    int i;
        
        for (i = 0; a[i] != '\0'; i++)
        {
        if (a[i] == b[0])
        {
            printf("O caracter aparece na posiçao %d \n", i+1);
        }
        }
}

int main()
{
    char c[20];
    char car[2];
    printf("digite uma palavra: ");
        scanf("%s", c);

        printf("Insira o caracter: ");
        scanf("%s", car);
    
    verposicao(&c,&car);
        
}