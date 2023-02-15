#include <stdio.h>

int main(void)
{
  char matriz[5][100];
  int vetConsumo[5];
  int econ = 0;

  int i, j;

  for (i = 0; i < 5; i++)
  {
    printf("\nDigite o modelo \n");
    gets(matriz[i]);
  }

  for (i = 0; i < 5; i++)
  {

    printf("\nDigite o consumo \n");
    scanf("%d", &vetConsumo[i]);

    if (vetConsumo[i] > econ)
    {
      econ = vetConsumo[i];
    }
  }

  printf("\n\n******************* Saida de Dados ********************* \n\n");

  printf("\n mais economico %d \n", econ);

  for (i = 0; i < 5; i++)
  {

    printf("\nConsumo %d \n", 1000 / vetConsumo[i]);
  }

  return (0);
}