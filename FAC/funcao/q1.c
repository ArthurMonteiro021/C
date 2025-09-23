#include <stdio.h>
float area(float base, float altura){
    float total;
    return total = (base*altura)/2;
}
int main() {
    float base, altura, total;
    printf("Insira a base do triangulo: ");
    scanf("%f", &base);
    printf("Insira a altura do triangulo: ");
    scanf("%f", &altura);
    area(base, altura);
    total = area(base, altura);
    printf("A area do triangulo e: %.2f\n", total);

}