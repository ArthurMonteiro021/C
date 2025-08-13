#include <stdio.h>
int main(void){
    float cotacao, valor, conversao;
    printf("Insira a cotacao do dolar: ");
    scanf("%f",&cotacao);
    printf("Insira um valor em dolar: ");
    scanf("%f",&valor);
    // 1 dolar = 5 reais
    conversao = valor * cotacao;

    printf("o valor em Reais é de: %f",conversao);
return 0;
}