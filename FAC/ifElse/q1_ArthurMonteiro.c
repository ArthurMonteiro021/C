#include <stdio.h>
int main(void){
    int num;
    printf("Insira um numero inteiro: ");
    scanf("%d", num);

    if(num%2 == 0){
        // numero par
        printf("1\n");
    }else{
        // numero impar
        printf("0\n");
    }
    return 0;}