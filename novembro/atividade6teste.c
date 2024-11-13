#include <stdio.h>
#include <limits.h>  // Para usar INT_MAX e INT_MIN

// Função para encontrar o maior e o menor algarismo de um número
void maiorMenorAlgarismo(int n, int *maior, int *menor) {
    *maior = INT_MIN;
    *menor = INT_MAX;

    while (n > 0) {
        int digito = n % 10;  // Obtém o último dígito
        if (digito > *maior) {
            *maior = digito;
        }
        if (digito < *menor) {
            *menor = digito;
        }
        n /= 10;  // Remove o último dígito
    }
}


int main() {
    int numero, maior, menor;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    maiorMenorAlgarismo(numero, &maior, &menor);

    printf("Maior algarismo: %d\n", maior);
    printf("Menor algarismo: %d\n", menor);

    return 0;
}