#include <stdio.h>
#include <string.h>

char **adicionaUmAluno(char vetor1[12][300], char nome[300])
{
    char **matrix;

    matrix = (char **)calloc(300, sizeof(char *));
    for (int i = 0; i < 2; i++)
    {
        matrix[i] = (char *)calloc(14, sizeof(char));
    }

    for (int k = 0; k < 12; k++)
    {
        matrix[k] = vetor1[k];
    }
    matrix[12] = nome;

    return matrix;
}
void somaUmPonto(int nota1[], int inicio, int fim)
{
    for (int j = inicio; j < fim; j++)
    {
        nota1[j] = nota1[j] + 1;
    }
}

int main()
{
    char equipe1[12][300] = {"caio", "bianca", "geovana", "gustavo", "henrique", "gabriel", "alice", " karina", "gabriela", "mateus", "julio", "jack"};
    char sexo1[12][5] = {"masc", "fem", "fem", "masc", "masc", "masc", "fem", "fem", "fem", "masc", "masc", "fem"};
    int nota1[12] = {8, 6, 9, 5, 3, 7, 6, 8, 2, 4, 9, 8};
    int i, j, resultado, cont1, cont2, maior, contmen;
    cont1 = 0;
    for (j = 0; j < 6; j++)
    {
        if (strcmp(sexo1[j], "fem") == 0)
        {
            printf("\n o nome da menina é %s", equipe1[j]);
            cont1++;
        }
    }
    cont2 = 0;
    for (j = 7; j < 12; j++)
    {
        if (strcmp(sexo1[j], "fem") == 0)
        {
            printf("\n o nome da menina da equipe 2 é %s", equipe1[j]);
            cont2++;
        }
    }

    if (cont1 > cont2)
    {
        maior = cont1;
        printf("\n a equipe 1 tem mais meninas ");
    }
    else
    {
        maior = cont2;
        printf("\n a equipe 2 tem mais meninas ");
    }
    int indices[6] = {};
    contmen = 0;
    for (i = 0; i < 6; i++)
    {
        if (strcmp(sexo1[i], "fem") == 0 && nota1[i] >= 8)
        {
            printf("\n a menina selecionada foi %s %d", equipe1[i], nota1[i]);
            indices[contmen] = i;
            contmen++;
        }
    }

    for (i = 7; i < 12; i++)
    {
        if (strcmp(sexo1[i], "fem") == 0 && nota1[i] >= 8)
        {
            printf("\n as meninas selecionadas da equipe 2 foram: %s %d", equipe1[i], nota1[i]);
            indices[contmen] = i;
            contmen++;
        }
    }
    for (i = 0; i < contmen; i++)
    {

        printf("\n menina selecionada : %s", equipe1[indices[i]]);
    }

    somaUmPonto(&nota1, 0, 6);

    somaUmPonto(&nota1, 7, 12);

    for (int j = 0; j < 12; j++)
    {
        printf("\n Novas notas %d  \n", nota1[j]);
    }
    char **matrix;
    char nome[300] = {'test'};

    printf("\n nome ");
    gets(nome);

    matrix = adicionaUmAluno(equipe1, nome);

    for (int i = 0; i < 13; i++)
    {

        printf("\n %s", matrix[i]);
    }

    return 0;
}