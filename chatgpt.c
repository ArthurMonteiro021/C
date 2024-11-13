#include <stdio.h>

// Função para encontrar o maior algarismo de um número
int maior_algarismo(int numero) {
    int maior = 0, digito;

    // Se o número for negativo, torná-lo positivo
    if (numero < 0) {
        numero = -numero;
    }

    // Encontrar o maior dígito
    while (numero > 0) {
        digito = numero % 10;  // Pega o último dígito
        if (digito > maior) {
            maior = digito;  // Atualiza o maior algarismo
        }
        numero /= 10;  // Remove o último dígito
    }

    return maior;
}

int main() {
    int n1, n2, maior_n1, maior_n2, diferenca;

    // Entrada dos dois números
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    // Encontra os maiores algarismos dos dois números
    maior_n1 = maior_algarismo(n1);
    maior_n2 = maior_algarismo(n2);

    // Calcula a diferença entre os maiores algarismos
    diferenca = maior_n1 - maior_n2;

    // Exibe o resultado
    printf("A diferença entre o maior algarismo de %d e o maior algarismo de %d é: %d\n", n1, n2, diferenca);

    return 0;
}
