#include <stdio.h>
#include <string.h>


int main()
{

    
    float num1,cal1;
    
    fflush(stdin);
    printf("sua altura?\n");
    scanf("%f", &num1);

    
    cal1=(72.7*num1) - 58;
    


    printf("o seu peso ideal é:%.2f\n", cal1);
    


        
    
    return 0;
}