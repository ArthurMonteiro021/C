#include <stdio.h>
// a) Função que calcula a soma de dois valores inteiros

int calculaSomaDeDoisValores(int a, int b){
    return a + b;
}
//  ----------------------------------------------------------------
int CalculaSomaDeTresValores(int a, int b, int c){
    int somaTres = calculaSomaDeDoisValores(a, b);
    int somaC = calculaSomaDeDoisValores(somaTres, c);
    return somaC;
}
int main(void){
    int a, b, c;
    printf("Informe dois valores inteiros: \n");
    scanf("%d %d", &a, &b);
    printf("Insira o terceiro valor inteiro: \n");
    scanf("%d", &c);

    printf("A soma de dois valores %d + %d = %d\n\n", a, b, calculaSomaDeDoisValores(a, b));
    printf("A soma de tres valores %d + %d + %d = %d\n", a, b, c, CalculaSomaDeTresValores(a, b, c));
    return 0;
}
