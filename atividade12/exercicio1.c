//media e desvio padrao com descolamento de memoria, usando ponteiro

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void mediaDesvio(float *notas, int qtdalu, float *media, float *desvio)
{   int i;
    float soma=0;
    float somadesv=0;
    for (i=0;i<qtdalu;i++)
    {
        soma=soma + notas[i];
    }
    
    *media=soma/qtdalu;

    for(i=0;i<qtdalu; i++)
    {
        somadesv= pow(notas[i]-*media,2);
    }

    *desvio=sqrt(somadesv/qtdalu);

}

int main()
{
int qtdalu, i;
float media, desvio;
float *notas;
    printf("qual é a quantidade de alunos?");
    scanf("%d", &qtdalu);
    notas= (float*) malloc(qtdalu*sizeof(int));
    if (notas!=NULL)
    {
        for(i=0;i<qtdalu;i++)
        {
        printf("nota do aluno %d: ",i+1);
        scanf("%f",&notas[i]);

        }
    }
    for(i=0;i<qtdalu;i++)
        {
        printf("nota: %f\n",notas[i]);

        }

    mediaDesvio(notas,qtdalu,&media,&desvio);
    printf("Media: %.2f\n", media);
    printf("Desvio padrao:%.2f\n", desvio);






}
