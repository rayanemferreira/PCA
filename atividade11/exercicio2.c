#include <stdio.h>
int imprimir(int *a, int *b)
{
    int i;
    for(; a <= b; a++){
        printf("%d\n", *a);
        if(*a==2)
            {
                printf("endereço %d ", &a);
        }
    }
}

int main()
{
    int vet[10]={11,2,13,14,15,2,17,18,2,20};
    imprimir(&vet[0], &vet[9]);
    


  
    return 0;

}