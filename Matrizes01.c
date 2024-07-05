#include <stdio.h>

int main(void) {
int matriz [] = {2,6,8,7,9};
  int soma = 0;
  printf("posição 0 é : %i\n",matriz[0]);
  printf("a soma   é : %i\n",matriz[1] + matriz[4]);
  for(int i = 0; i < 5; i++){;
  soma = soma + matriz[i];
      }
  printf("A soma dos elementos da matriz é: %i", soma);
  return 0;
}