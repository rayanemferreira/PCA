#include <stdio.h>
#include <string.h>


int main()
{


    float num1, num2,num3, num4,media;
    
    fflush(stdin);
    printf("primeira nota?\n");
    scanf("%f", &num1);

    printf("segunda nota?\n");
    scanf("%f", &num2);

    printf("terceira nota?\n");
    scanf("%f", &num3);

    printf("quarta nota?\n");
    scanf("%f", &num4);

    media=(num1 + num2 + num3 + num4)/4;

    printf("media: %.2f\n", media);

        
    
    return 0;
}