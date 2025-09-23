#include <stdio.h>

int main(void){
    float venda, meta1, meta2, bonus;
    printf("Insira o valor da venda: ");
    scanf("%f",&venda);
    printf("Informe o valor da meta1: ");
    scanf("%f",&meta1);
    printf("Informe o valor da meta2: ");
    scanf("%f",&meta2);
    bonus = venda;
    if(venda >=meta1){
        bonus = venda*1.02;
        if(venda >=meta2){
            bonus *=1.01;
        }
    }
    printf("O valor do bonus e: %.2f\n", bonus);
        return 0;
}