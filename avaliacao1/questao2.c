#include <stdio.h>
#include <math.h>

float fatorial(float valor)
{
    float i, totalfatorial=1;
    for (i=1; i<=valor; i++)
    {
       
        totalfatorial= (pow(i,i) * totalfatorial);  
    }
    return totalfatorial;


}
int main()
{
    float n1, total;
    total=0;
    printf("digite o numero que deseja fazer o hiperFatorial:");
    scanf("%f",&n1);
    total = fatorial(n1);
    printf("o hiperFatorial é:vim %2.f", total);

    
    return 0;
}