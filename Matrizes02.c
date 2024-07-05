#include <stdio.h>

int main(void) {
int matriz [] = {2,6,8,7,9};
  int soma = 0;
  int media;

  for(int i = 0; i < 5; i++){;
  soma = soma + matriz[i];
  media = soma / 5;
                          
      }
  media = soma / 5;
  printf("A media  é: %i", media);
  return 0;
}