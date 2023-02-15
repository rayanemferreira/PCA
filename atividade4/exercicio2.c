#include <stdio.h>
void peso_semana(float *peso, float *semana)
{
  printf("peso da criança :");
  scanf("%f", *&peso);
  printf("semanas de gestaçoes:");
  scanf("%f", *&semana);
}

float cond_parto(float *peso, float *semana)
{

  float mult;
  mult = *semana / 4;

  if (*peso < 100 || mult < 7)
  {
    printf("Parto não deverá ser realizado, reavaliar clinicamente");
    return 1;
  }
  if (*peso > 2500 && mult > 7)
  {
    printf("Parto normal");
    return 1;
  }
  if ((*peso >= 2500 && *peso <= 2500) || mult <= 7)
  {
    printf("Parto Cesariana");
    return 1;
  }
  if ((*peso >= 1500 && *peso <= 2000) && mult >= 9)
  {
    printf("Parto normal");
    return 1;
  }
  else
  {
    printf("Parto Cesariana");
    return 1;
  }
}

int main()
{
  float peso, semana;
  peso_semana(&peso, &semana);
  cond_parto(&peso, &semana);
  return 0;
}
