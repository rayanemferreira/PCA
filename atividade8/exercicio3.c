#include <stdio.h>
#include <string.h>

int main(void)
{
  char data[12];
  char dia[3];
  char mes[3];
  char ano[5];
  int i, j, diaINT, mesINT, anoINT;

  printf("\n Digite uma data \n");
  gets(data);

  if (data[2] != '/' || data[5] != '/')
  {
    printf("erro na data");
    return 0;
  }

  j = 0;
  for (i = 0; i < 2; i++)
  {
    dia[j] = data[i];
    j++;
  }

  dia[j] = '\0';
  diaINT = atoi(dia);

  j = 0;
  for (i = 3; i < 5; i++)
  {
    mes[j] = data[i];
    j++;
  }

  mesINT = atoi(mes);

  j = 0;
  for (i = 6; i < 11; i++)
  {
    ano[j] = data[i];
    j++;
  }
  anoINT = atoi(ano);

  printf("\n dia %d mes %d  ano %d \n", diaINT, mesINT, anoINT);
}
