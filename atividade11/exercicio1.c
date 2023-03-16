#include <stdio.h>
int imprimir(float *a, float *b)
{
    for(a ; a <= b; a++)
    printf("%f\n", *a);

}

int main()
{
    float vet[5]={5,4,3,2,1};
    float vet2[6]={6,8,5,9,7,10};
    float vet3[7]={11,12,13,14,15,16,17};
    imprimir(&vet[0], &vet[4]);
    imprimir(&vet2[0], &vet2[5]);
    imprimir(&vet3[0], &vet3[6]);
    



    

  
    return 0;

}