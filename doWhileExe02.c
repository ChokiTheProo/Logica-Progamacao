#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero entre 1 e 5: ");
        scanf("%d", &numero);

       
        if (numero < 1 || numero > 5) {
            printf("Numero invalido. Digite um numero entre 1 e 5.\n");
        }

    } while (numero < 1 || numero > 5);

    printf("Numero valido inserido: %d\n", numero);

    return 0;
}