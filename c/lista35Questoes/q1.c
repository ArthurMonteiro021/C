#include <stdio.h>
int main(void){
    float valorUnit, imposto, aliquota, total , subtotal;
    int qtd ;
    printf("Insira o preço do valor unitário: ");
    scanf("%f",&valorUnit);
    printf("Insira a quantidade de produtos: ");
    scanf("%d",&qtd);
    printf("Insira a aliquota de imposto:");
    scanf("%f",&aliquota);

    subtotal = qtd * valorUnit;
    imposto = (aliquota/100)*subtotal;
    total = imposto + subtotal;
    printf("\nO Subtotal é de: %.2f",subtotal);
    printf("\nO Imposto é de: %.2f",aliquota);
    printf("\nO Total é de: %.2f",total);

    return 0;
}