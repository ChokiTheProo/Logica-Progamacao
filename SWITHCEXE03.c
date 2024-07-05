#include <stdio.h>
int main() {
    int escolha;
   double  pi = 3.1415;
    float lado, base, altura, raio, area;
    // Solicita ao usuário que escolha a forma geométrica
    printf("Escolha a forma geométrica para calcular a área:\n");
    printf("1 - Quadrado\n");
    printf("2 - Triângulo\n");
    printf("3 - Círculo\n");
    scanf("%i", &escolha);
    // Switch case para calcular a área com base na escolha do usuário
    switch (escolha) {
        case 1:
            // Cálculo da área do quadrado
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("A área do quadrado é %.2f\n", area);
            break;

        case 2:
            // Cálculo da área do triângulo
            printf("Digite a base do triângulo: ");
            scanf("%f", &base);
            printf("Digite a altura do triângulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("A área do triângulo é %.2f\n", area);
            break;

        case 3:
      
            printf("Digite o raio do círculo: ");
            scanf("%f", &raio);
            area = pi * raio * raio; 
            printf("A área do círculo é %.2f\n", area);
            break;

        default:
         
            printf("Escolha inválida. Por favor, escolha entre 1, 2 ou 3.\n");
            break;
    }

    return 0;
}