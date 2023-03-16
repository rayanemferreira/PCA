#include <stdio.h>
int imprimir(float *a, float *b)
{
    for(a ; a <= b; a++)
    printf("%f\n", *a);

}


int main()
{
    float vet[5]={5,4,3,2,1};
    imprimir(&vet[0], &vet[4]);


    

  
    return 0;

}

