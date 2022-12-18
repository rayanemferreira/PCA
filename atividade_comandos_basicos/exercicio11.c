#include <stdio.h>
#include <string.h>

int main()
{

    float sal, hora, totsal, ir, inss, sid,liq;

    fflush(stdin);
    printf("qual é o seu salario por hora?\n");
    scanf("%f", &sal);

    fflush(stdin);
    printf("quantas horas vc trabalha por mes?\n");
    scanf("%f", &hora);

    totsal = sal * hora;

    ir = totsal * 0.11;
    
    inss = totsal * 0.08;
    
    sid = totsal * 0.05;

    liq= totsal - ir - inss - sid;
    printf("salario bruto: %.2f\n",totsal);
    printf("desconto do IRPF: %.2f\n", ir);
    printf("desconto de inss: %.2f\n", inss);
    printf("deconto do sidicato: %.2f\n", sid);
    printf("salario liquido: %.2f\n", liq);

    return 0;
}