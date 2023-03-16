#include <stdio.h>
#include <string.h>
int indice_maior(int nota[24], int inicio, int fim)
{

    int maior = 0, j;
    int mai_indice = 0;
    for (j = inicio; j <= fim; j++)
    {
        if (nota[j] > maior)
        {
            maior = nota[j];
            mai_indice = j;
        }
    }
    return mai_indice;
}
int main()
{
    char jogadores[23][400] = {"hugo souza", "matheus cunha", "santos", "rodrigo caio", "leo pereira",
                               "david luiz", "cleiton", "fabricio bruno", "pablo", "varela", "everton ribeiro",
                               "de arrascaeta", "victor hugo","metheus franca","thiago maia", "erick", "gerson"
                               "arturo vidal", "gabi gol", "bruno henrique", "pedro", "marinho", "everton"};
    int nota_jogador[24], i, num;
    int num_golei, num_def, num_meio, num_atac, cont;
    for (i = 0; i < 23; i++)
    {
        printf("\nDigite a nota do jogador:%s ", jogadores[i]);
        scanf("%d", &nota_jogador[i]);
    }


    num_golei = 1;
    cont = 0;
    for (i = 0; i <= 2; i++)
    {
        if (cont < num_golei)
        {
            num = indice_maior(nota_jogador, 0, 2);
            nota_jogador[num] = -1;
            cont++;
        }
    }


    num_def = 4;
    cont = 0;
    for (i = 3; i <= 9; i++)
    {
        if (cont < num_def)
        {
            num = indice_maior(nota_jogador, 3, 9);
            nota_jogador[num] = -1;
            cont++;
        }
    }
    num_meio=4;
    cont=0;
    for (i = 10; i <= 17; i++)
    {
        if (cont < num_meio)
        {
            num = indice_maior(nota_jogador, 10, 17);
            nota_jogador[num] = -1;
            cont++;
        }
    }

    num_atac=4;
    cont=0;
    for (i = 18; i <= 22; i++)
    {
        if (cont < num_atac)
        {
            num = indice_maior(nota_jogador, 18, 22);
            nota_jogador[num] = -1;
            cont++;
        }
    }

    for (i = 0; i < 23; i++)
    {
        if (nota_jogador[i] == -1)
        {
            printf("\n os jogadores selecionados foram : %s ", jogadores[i]);
        }
    }
}
