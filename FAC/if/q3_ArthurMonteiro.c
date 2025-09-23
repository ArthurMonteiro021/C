#include <stdio.h>
int main(void){
    float temp, final;
    printf("Insira uma temperatura em Celsius: ");
    scanf("%f",&temp);
    if(temp <0 ){
        final = temp + 5;
    }if(temp < -40){
        final = temp + 3;
    }

    printf("A temperatura final e de: %.2f\n", final);
    return 0;}