#include <stdio.h>
int main(void){
        float altura, largura, comprimento, volume, peso;
    printf("Infomre o comprimento da caixa: \n");
    scanf("%f",&comprimento);
    printf("Informe a largura da caixa: \n");
    scanf("%f",&largura);
    printf("Informe a altura da caixa: \n");
    scanf("%f",&altura);
    printf("Informe o peso da caixa: \n");
    scanf("%f",&peso);
    volume = altura * largura * comprimento;

    if(volume > 0 && volume <= 8000){
        printf("30.000R$");
    }else if(volume <=64000){
        if(peso <= 20){
            printf("65.000R$");
        }else{
            printf("80.000R$");
        }
    }else if(volume <=216000){
        if(peso >30 && peso <= 50){
            printf("100.000R$");
    }
    }else{
        printf("Caixa fora das especificações");
    }

    return 0;
}