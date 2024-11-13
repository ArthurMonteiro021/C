#include <stdio.h>
#include <limits.h>  // Para usar INT_MAX e INT_MIN
void maiorNum(int num, int *maior, int *menor){
     *maior = INT_MIN;
    *menor = INT_MAX;
    while(num >0){
        //pega o ultimo digito
        int digito = num%10;
        
        if(digito > *maior){
            *maior = digito;
        }

        if(digito < *menor){
            *menor = digito;
        }
        //tira o ultimo digito
        num/=10;
    }
}

int main(){
    int num, maior, menor;
    //recebe o numero inteiro
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    //aplica na função
    maiorNum(num, &maior, &menor);


    printf("Maior algarismo: %d \n", maior);
    printf("Menor algarismo: %d \n", menor);
    return 0;
}