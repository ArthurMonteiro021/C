#include <stdio.h>

int main(void){
    float valor, multa, total;
    int dias;
    printf("Insira um valor: ");
    scanf("%f",&valor);
    printf("Insira a quantidade de dias de atraso: ");
    scanf("%d",&dias);

    if(dias > 0){
    multa = valor*(dias*0.005);
    total = valor + multa;
    printf("o valor da multa e de %2.f", total);
    }else{
        printf("Não há multa, valor de %2.f será mantido",valor);
    }
    
    return 0;
}