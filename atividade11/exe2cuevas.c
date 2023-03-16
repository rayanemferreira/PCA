#include <stdio.h>
int *imprimir(int *a, int *b)
{
    int i;
    for(a ; a <= b; a++){
        printf("%d\n", *a);
        if(*a==2)
            {
                return a;
        }

    }
    return null;
}

int main()
{
    int vet[10]={11,2,13,14,15,2,17,18,2,20};
    int *inteiro;
    imprimir(&vet[0], &vet[9]);
    


  
    return 0;

}