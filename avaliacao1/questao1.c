#include <stdio.h>
#include <string.h>

int main()
{
    int n, i = 1, maior = 0, menor = 25466241, media, continua = 1, soma;
    soma = 0;
    char resp[2];
    while (continua == 1)
    {

        printf("Digite uma nota:\n ");
        scanf("%d", &n);
        if (n > maior)
        {
            maior = n;
        }
        if (n < menor && n > 0)
        {
            menor = n;
        }

        printf("deseja inserir mais notas?\n");
        scanf("%s", &resp);
        fflush(stdin);
        

        soma = soma + n;
        media=soma/i;
        i++;
        if (strcmp(resp, "n") == 0)
        {
            continua = 0;
        }
        
    }
    
    printf("media = %d\n", media);
    printf("A maior media = %d\n", maior);
    printf("A menor mediaa = %d\n", menor);

    return 0;
}