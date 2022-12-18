#include <stdio.h>
#include <string.h>


int main()
{


    float num1, cm;
    
    fflush(stdin);
    printf("medida(m)?\n");
    scanf("%f", &num1);

    


    cm=(num1 * 100);

    printf("essa medida em cm, vale: %.2f\n", cm);

        
    
    return 0;
}