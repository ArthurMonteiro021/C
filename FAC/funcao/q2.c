#include <stdio.h>
float perimetro(float base, float altura){
    float total = base*2 + altura*2;
    return total;
}
int main(void) {
    float base, altura, total;
    printf("Inisira a base de um retangulo: ");
    scanf("%f",&base);
    printf("Insira a altura de um retangulo: ");
    scanf("%f",&altura);
    total = perimetro(base, altura);
    printf("O perimetro do retangulo e: %.2f\n", total);
}