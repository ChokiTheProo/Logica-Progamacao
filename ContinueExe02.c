#include <stdio.h>

int main(void) {
  int i ;
  for(int i =1; i<=10; i++){
    if(i % 2 != 0)
      continue;// pula interação
    
    printf("%i\n",i);
  }  
printf("Apenas numeros pares\n");
  return 0;
}